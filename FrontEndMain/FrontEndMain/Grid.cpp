/* 
* Implementation of functions used to interact with Grid object.
*/

#include "Grid.h"

#include <string>
#include <vector>
#include <iostream>

using namespace std;

GridException::GridException(const string& m) : message(m) {}
string GridException::what() const { return message; }

Grid::Grid() {
}

Grid::Grid(string name, int gridSize) {
    playerName = name;
    if (gridSize < MIN_GRID || gridSize > MAX_GRID)
        throw GridException("Grid dimensions must be less than " + to_string(MAX_GRID) + " or greater than " + to_string(MIN_GRID) + ".");
    shots = 0;
    hits = 0;

    vector<char> row (gridSize, 'O');
    vector<vector<char> > grid (gridSize, row);
    shotsGrid = grid;

    vector<Ship> temp1;
    ships = temp1;
    vector<Ship> temp2;
    sunk = temp2;
}

string Grid::printGrid(bool showShips) const {
    int row, col;

    string gridOut = "  "; //account for initial offset from row
    for(col = 0; col < shotsGrid[0].size(); col++){
        if(col < 10)
            gridOut += " "; //add one space if col is less than 10
        gridOut += "  " + to_string(col);
    }

    gridOut += '\n';
    char temp;
    for(row = 0; row < shotsGrid.size(); row++) {
        if(row < 10)
            gridOut+= " ";
        gridOut += to_string(row);
        for(col = 0; col < shotsGrid[0].size(); col++) {
            temp = shotsGrid.at(row).at(col);
            // Only show hits and misses by default
            // showShips is true only for debugging purposes
            if (!showShips){
                if (temp == 'S'){
                    temp = 'O';
                }
            }
            gridOut += "   ";
            gridOut.push_back(temp);
        }
        gridOut += '\n';
    }
    gridOut += "Total ships: " + to_string(ships.size() + sunk.size()) + "\n";
    gridOut += "Ships remaining: " + to_string(ships.size()) + "\n";
    gridOut += "Ships sunk: " + to_string(sunk.size()) + "\n";
    return gridOut;
}

string Grid::shoot(int row, int col) {
    string shipType = "empty";

    if (this->checkBounds(row, col))
        throw GridException("Shot exceeds board bounds.");
    if (shotsGrid[row][col] == 'M' || shotsGrid[row][col] == 'H' || shotsGrid[row][col] == 'X')
        throw GridException("You have already shot position (" + to_string(row) + ", " + to_string(col) + ").");

    if (shotsGrid[row][col] == 'S') {
        cout << "\nHIT\n" << endl;
        shotsGrid[row][col] = 'H';
        hits++;
        for(int i = 0; i < ships.size(); i++){
            if(ships[i].hit(row, col)){
                shipType=ships[i].toStr();
                if(ships[i].getHealth() == 0){
                    this->writeShip(ships[i], 'X');
                    sunk.push_back(ships[i]);
                    ships.erase(ships.begin() + i);
                }
                else{
                    ships.insert(ships.begin(), ships[i]);
                    ships.erase(ships.begin() + i + 1);
                }
                break;
            }
        }
    }
    else if (shotsGrid[row][col] == 'O'){
        cout << "\nMISS\n" << endl;
        shotsGrid[row][col] = 'M';
    }
    shots++;
return shipType;}

void Grid::addShip(const Ship& shipIn) {
    bool validPos = true;
    vector<vector<int> > temp = shipIn.getPos();
    for(int i = 0; i < temp.size(); i++) {
        if (this->checkBounds(temp[i][0], temp[i][1])) {
            validPos = false;
            throw ShipException("The ship isn't on the map.");
        }
        if (shotsGrid[temp[i][0]][temp[i][1]] != 'O') {
            validPos = false;
            throw ShipException("There is a ship in the way.");
        }
    }
    if (validPos) {
        this->writeShip(shipIn, 'S');
        ships.push_back(shipIn);
    }
}

bool Grid::checkBounds(int row, int col) {
    return ((row < 0 || row >= shotsGrid.size()) || (col < 0 || col >= shotsGrid[0].size()));
}

void Grid::writeShip(const Ship& shipIn, char cIn) {
    vector<vector<int> > temp = shipIn.getPos();
    for(int i = 0; i < temp.size(); i++){
        shotsGrid[temp[i][0]][temp[i][1]] = cIn;
    }
}

bool Grid::isWon() const {
    return (ships.size() == 0);
}

string Grid::printStats() const {
    string stats = "";
    stats += "Hits: " + to_string(hits) + "\n";
    stats += "Shots: " + to_string(shots) + "\n";
    stats += "Accuracy: " + to_string(hits/(float)shots);
    return stats;
}



void Grid::attack(string name){
    int row, col;
    cout << "\n" << name << " time to take a shot!" << endl;
    cout << "Enter a row: ";
    row = checkInput("coordinate");
    cout << "Enter a column: ";
    col = checkInput("coordinate");

    try {
        this->shoot(row, col);
    } catch (GridException &e) {
        cerr << endl << e.what() << endl;
    }
}

string Grid::getPlayerName() const {
    return playerName;
}

string promptPlayerForName(int playerNum){
    string name;
    cout << "\nPlayer " << playerNum << ", please enter your name: ";
    cin >> name;
    return name;
}

vector<vector<char> > Grid::getGrid() const{
    return shotsGrid;
}

int Grid::getSunkCount(){
    return sunk.size();
}
string Grid::getMostRecentlySunkShipName(){
    if (sunk.size() > 0)
        return sunk.at(sunk.size() - 1).toStr();
    return "";
}

// Non-member function
void displayEndOfGameStats(const Grid& grid1, const Grid& grid2){
    string winner, loser;
    if (grid1.isWon()){
        winner = grid2.getPlayerName();
        loser = grid1.getPlayerName();
    }
    else if (grid2.isWon()){
        winner = grid1.getPlayerName();
        loser = grid2.getPlayerName();
    }
    cout << "\n" << winner << " WON!!!!!" << endl;
    cout << loser << " lost :( \n" << endl;
    cout << grid1.printStats() << endl;
    cout << "\n" << grid2.printStats() << endl;
}

// Accepts "coordinate" or "direction"
int checkInput(string inType) {
	string in;
	bool success = false;

	while(!success) {
		cin >> in;
		cout << endl;

		if(inType == "coordinate") {
			for(int i = 0; i < in.length(); i++) {
				if(!isdigit(in[i])) {
					cout << "Coordinates should be number values. Please try again: ";
					continue;
				}
			}
		} else if(inType == "direction") {
			if(in != "0" && in != "1") {
				cout << "Direction should be either 0 or 1. Please try again: ";
				continue;
			}
		}
		success = true;
	}
	return stoi(in);
}

vector<Ship> Grid::getShips(){
    return ships;
}

string Grid::getHits(){
    return to_string(hits);
}
string Grid::getShots(){
    return to_string(shots);
}
string Grid::getAccuracy(){
    float hitsf = (hits/(float)shots);
    int hitsInt;

    if (hitsf!=hitsf){
        hitsInt = 0;
    } else {
        hitsInt = (hitsf)*100;
    }
    return to_string(hitsInt)+" %";
}
