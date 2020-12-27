/* 
* Outline of functions used to interact with Ship object.
*/

#include "Ship.h"

#include <vector>
#include <string>

#include <iostream>


ShipException::ShipException(const string &m) : message(m) {}
string ShipException::what() const { return message; }

Ship::Ship() {
    isPos = false;
    name = "Default";
    length = 1;
    width = 1;
}

Ship::Ship(string nameIn, int lengthIn, int widthIn) {
    if (lengthIn < 1 || widthIn < 1 || nameIn.size() < 1)
        throw ShipException("Illegal length, width, or name!");
    isPos = false;
    name = nameIn;
    length = lengthIn;
    width = widthIn;

    vector<int> cell;
    cell.push_back(0);
    cell.push_back(0);
    cell.push_back(1);
    vector<vector<int> > tempPos(length*width, cell);
    pos = tempPos;
}

Ship::Ship(const Ship& right) {
    name = right.name;
    length = right.length;
    width = right.width;
    isPos = right.isPos;

    vector<int> cell(3, 0);
    vector<vector<int> > ship(length*width, cell);

    for(int i = 0; i < right.pos.size(); i++){
        ship[i][0] = right.pos[i][0];
        ship[i][1] = right.pos[i][1];
        ship[i][2] = right.pos[i][2];
    }
    pos = ship;
}

Ship& Ship::operator=(const Ship& right){
    if(this != &right){
        name = right.name;
        length = right.length;
        width = right.width;
        isPos = right.isPos;

        vector<int> cell(3, 0);
        vector<vector<int> > ship(length*width, cell);

        for(int i = 0; i < right.pos.size(); i++){
            ship[i][0] = right.pos[i][0];
            ship[i][1] = right.pos[i][1];
            ship[i][2] = right.pos[i][2];
        }
        pos = ship;
    }
    return *this;
}

void Ship::placeShip(int row, int col, bool dir) {
    vector<int> cell;
    cell.push_back(row);
    cell.push_back(col);
    cell.push_back(1);
    vector<vector<int> > ship(length*width, cell);
    for (int i = 0; i < ship.size(); i++) {
        if (dir) {
            ship[i][0] += i % length;
            ship[i][1] += i / length;
        }
        else {
            ship[i][1] += i % length;
            ship[i][0] += i / length;
        }
    }
    pos = ship;
}

void Ship::positionShip(bool isPlaced) {
    isPos = isPlaced;
}

bool Ship::isPositioned() {
    return isPos;
}

bool Ship::hit(int row, int col) {
    bool hit = false;
    for (int i = 0; i < pos.size(); i++)
        if(row == pos[i][0] && col == pos[i][1]){
            hit = true;
            pos[i][2] = 0;
            break;
        }
    return hit;
}

vector<vector<int> > Ship::getPos() const {
    return pos;
}

int Ship::getHealth() const {
    int health = 0;
    for(int i = 0; i < pos.size(); i++)
        health += pos[i][2];
    return health;
}

string Ship::toStr() {
    return name;
}

int Ship::getLength() {
    return length;
}

int Ship::getWidth() {
    return width;
}
