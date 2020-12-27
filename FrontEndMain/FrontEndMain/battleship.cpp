#include "battleship.h"


/* CISC 320 Project: Team Cobol
*  Contains implementation of classes used for the Queen's themed version of battleship.
*/

#include <iostream>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

Player::Player(){
    busCount = 1;
    bikeCount = 1;
    carCount = 1;
};

Game::Game(){
    boardSize = 10;
    Player playa;
    playerOne = playa;
    playerTwo = playa;
    vector<vector<string>> b(boardSize, vector<string> (boardSize, "X"));
    pOneboard = b;
    pTwoboard = b;
}

Coordinates getCoordinates(string vehichle){
    //TODO add input validation
    Coordinates c;
    cout << "Choose X,Y coordinates for your " << vehichle << " (0-9)" << endl;
    cout << "X:";
    cin >> c.x;
    cout << "Y:";
    cin >> c.y;
    cout << "Type 'V' for Vertical Placement" << endl;
    cout << "Type 'H' for Horizontal Placement" << endl;
    cout << "Direction:";
    cin >> c.direction;
    return c;
}

void Game::SetBoard(vector<vector<string>>& board, Player playerX){
    bool canPlace;
    while (playerX.carCount > 0){
        Coordinates car_placement = getCoordinates("Car");
        canPlace = isValidPlacement(board, car_placement, "Car");
        if (canPlace){
            placeVehichle(board, car_placement,"Car");
            playerX.carCount -= 1;
        } else{
            cout << "Try again, that spot is taken or a car cannot be placed there" << endl;
        }
    }
    while (playerX.busCount > 0){
        Coordinates bus_placement = getCoordinates("Bus");
        canPlace = isValidPlacement(board, bus_placement ,"Bus");
        if (canPlace){
            placeVehichle(board, bus_placement, "Bus");
            playerX.busCount -= 1;
        } else{
            cout << "Try again, that spot is taken or a bus cannot be placed there" << endl;
        }
    }
    while (playerX.bikeCount > 0){
        Coordinates bike_placement = getCoordinates("Bike");
        canPlace = isValidPlacement(board,bike_placement, "Bike");
        if (canPlace){
            placeVehichle(board, bike_placement, "Bike");
            playerX.bikeCount -= 1;
        } else{
            cout << "Try again, that spot is taken or a bike cannot be placed there" << endl;
        }
    }
}

Player Game::GetPlayer(int player_num){
    if (player_num == 1)
        return playerOne;
    return playerTwo;
}

tuple<int, int> Game::getHeightAndWidth(string type){
    if (type == "Car")
        return make_tuple(car.height, car.width);
    else if (type == "Bus")
        return make_tuple(bus.height, bus.width);
    else
        return make_tuple(bike.height, bike.width);
}

bool Game::isValidPlacement(vector<vector<string>>& board, Coordinates placement, string type){
    tuple<int, int> height_and_width = getHeightAndWidth(type);
    int height = get<0>(height_and_width);
    int width = get<1>(height_and_width);
    int add_to_x;
    int add_to_y;
    if (placement.direction == "V"){ // Vertical
        add_to_x=width;
        add_to_y=height;
    } else {     // Horizontal
        add_to_x=height;
        add_to_y=width;
    }
    if ( (placement.x+add_to_x <= boardSize) && (placement.y+add_to_y <= boardSize) ){
        for (int i = placement.y; i < placement.y+add_to_y; i++){
            for(int j = placement.x; j < placement.x+add_to_x; j++){
                if (board[i][j] != "X"){
                    return false;
                }
            }
        }
    } else {
        return false;
    }
    return true;
}

void Game::placeVehichle(vector<vector<string>>& board, Coordinates placement, string type){
    string identifier;
    if (type == "Car"){
        identifier = "C";
    } else if (type == "Bus"){
        identifier = "B";
    } else {
        identifier = "P";
    }
    tuple<int, int> height_and_width = getHeightAndWidth(type);
    int height = get<0>(height_and_width);
    int width = get<1>(height_and_width);
    int add_to_i;
    int add_to_j;
    if (placement.direction == "V"){ // Vertical
        add_to_i = height;
        add_to_j = width;
    } else {   // Horizontal
        add_to_i = width;
        add_to_j = height;
        }
    for (int i = placement.y; i < placement.y+add_to_i; i++){
        for(int j = placement.x; j < placement.x+add_to_j; j++){
            board[i][j] = identifier;
            }
        }
}

void Game::TakeTurn(vector<vector<string>>& board){
    int X, Y;
    cout << "Choose X,Y coordinates for your shot!!!" << endl;
    cout << "X:";
    cin >> X;
    cout << "Y:";
    cin >> Y;
    if (board[Y][X].compare("H") == 0){
            cout << "Already hit this tile!" << endl << endl;
    } else if (board[Y][X].compare("X") != 0){
        board[Y][X] = "H";
        cout << "HIT" << endl << endl;
    } else{
        cout << "MISS" << endl << endl;
    }
}

bool Game::CheckWin(vector<vector<string>>& board){
    bool trigger(true);
    for (int i = 0; i < board.size(); i++){
        for (int j = 0; j < board[i].size(); j++){
            if (board[i][j].compare("C") == 0 || board[i][j].compare("B") == 0 || board[i][j].compare("P") == 0 ){
                trigger =  false;
            }
        }
    }
    return trigger;
}

void Game::PrintBoard(vector<vector<string>>& board){
    for (int i = 0; i < board.size(); i++){
                for (int j = 0; j < board[i].size(); j++){
                    cout << board[i][j] << " ";
                }
                cout << endl;
            }
}
