/* 
* Outline of functions used to interact with Ship object.
*/

#ifndef BATTLESHIP_SHIP_H
#define BATTLESHIP_SHIP_H

#pragma once

#include <string>
#include <vector>

using namespace std;

class ShipException {
public:
    ShipException(const string&);
    string what() const;
private:
    string message;
};

class Ship {
public:
    Ship();
    Ship(string name, int length, int width = 1);
    Ship(const Ship& right);
    Ship& operator=(const Ship&);
    void placeShip(int row, int col, bool dir);
    void positionShip(bool isPlaced);
    bool isPositioned();
    vector<vector<int> > getPos() const;
    string toStr(); // Returns name of ship
    int getLength();
    int getWidth();
    int getHealth() const;
    bool hit(int row, int col); //the integer indicates how far the shot was from the head of the ship

private:
    //bool dir;   // stores the direction of the ship 0:columnwise(left), 1:rowwise(down)
    string name;
    int length;
    int width;
    bool isPos;
    vector<vector<int> > pos;//stores the (row, column, health) of each segment

};


#endif //BATTLESHIP_SHIP_H
