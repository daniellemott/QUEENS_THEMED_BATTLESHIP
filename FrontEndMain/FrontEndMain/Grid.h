/* 
* Outline of functions used to interact with Grid object. :)
*/

#ifndef BATTLESHIP_GRID_H
#define BATTLESHIP_GRID_H

#pragma once

#include "Ship.h"

#include <string>
#include <vector>

using namespace std;

const int MAX_GRID = 100;
const int MIN_GRID = 7;

class GridException {
public:
    GridException(const string&);
    string what() const;
private:
    string message;
};

class Grid {
public:
    //Grid() makes a square character array with dimension and
    //stores the player's name
    Grid();
    Grid(string name, int gridSize=10);
    // printGrid() displays hit and misses on opponent's board
    // showShips is only true when used for debugging purposes
    string printGrid(bool showShips=false) const;
    string printStats() const;
    string shoot(int row, int col);
    //addShip() adds a placed Ship object onto the grid
    void addShip(const Ship&);
    //updates the cells occupied by ship with char
    void writeShip(const Ship&, char);
    bool checkBounds(int row, int col);
    bool isWon() const;
    // addVehichle() adds a singular vehichle on to the player's board
    // setUpBoard() prompts user to place all their vehichles
    // attack() prompts the user to take a shot on their opponent's board
    void attack(string name);
    string getPlayerName() const;
    vector<vector<char> > getGrid() const;
    int getSunkCount();
    string getMostRecentlySunkShipName();
    string getHits();
    string getShots();
    string getAccuracy();
    vector<Ship> getShips();

private:
    int shots, hits;
    string playerName;
    vector<vector<char> > shotsGrid;
    vector<Ship> ships;
    vector<Ship> sunk;
};

// Non-member functions used in main game loop
string promptPlayerForName(int playerNum);
void displayEndOfGameStats(const Grid& grid1, const Grid& grid2);

// Input validation function, takes "coordinate" or "direction" as input
int checkInput(string inType);

#endif //BATTLESHIP_GRID_H
