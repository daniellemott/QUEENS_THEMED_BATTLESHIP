#ifndef BATTLESHIP_H
#define BATTLESHIP_H

/* CISC 320 Project: Team Cobol
*  Contains declaration of classes used for the Queen's themed version of battleship.
*/

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <QVector>
#include <QString>

using namespace std;


struct Bus{
    int width = 2;
    int height = 3;
    string pathImg = "Path/To/Bus";
};

struct Car{
    int width = 1;
    int height = 3;
    string pathImg = "Path/To/Car";
};

struct Bike{
    int width = 1;
    int height = 2;
    string pathImg = "Path/To/Bike";
};



class Player {
public:
    Player();
    int busCount;
    int carCount;
    int bikeCount;
};

class Game{
public:
    Game();
    // Enables user to place all their vehichles on the grid
    void SetBoard(vector<vector<string>>& board, Player playerX);
    // Returns specified player object
    Player GetPlayer(int player_num);
    // Displays corresponding player's board
    void PrintBoard(vector<vector<string>>& board);
    // User's turn: User shoots a square and views results of their shot
    void TakeTurn(vector<vector<string>>& board);
    // Returns whether or not the game is over
    bool CheckWin(vector<vector<string>>& board);
    vector<vector<string>> pOneboard;
    vector<vector<string>> pTwoboard;
private:
    int boardSize;
    Player playerOne;
    Player playerTwo;
    Bike bike;
    Car car;
    Bus bus;
    // Returns height and width (in that order) of vehichle of the corresponding type
    tuple<int, int> getHeightAndWidth(string type);
    // Returns whether a user can place the corresponding vehichle at the specified grid location
    bool isValidPlacement(vector<vector<string>>& board, Coordinates placement, string type);
    // Adds vehichle onto specified grid location
    void placeVehichle(vector<vector<string>>& board, Coordinates placement, string type);

};

// Non-Member util functions
// Prompts user for x, y coordinates and direction of object to be placed on board
Coordinates getCoordinates(string vehichle);
// Sets and prints board for both players
void initializeGame(Game& Game1);


#endif // BATTLESHIP_H
