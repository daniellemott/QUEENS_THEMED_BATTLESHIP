#include <QtTest>
#include "tst_testbattleship.h"
#include "../../FrontEndMain/Ship.h"
#include "../../FrontEndMain/Grid.h"
#include <iostream>

TestBattleShip::TestBattleShip()
{

}

TestBattleShip::~TestBattleShip()
{

}

void TestBattleShip::test_default_ship_constructor()
{
    Ship defaultShip;
    QVERIFY(defaultShip.getLength() == 1);
    QVERIFY (defaultShip.getWidth() == 1);
    QVERIFY (defaultShip.toStr() == "Default");
    QVERIFY (defaultShip.isPositioned() == false);
}

void TestBattleShip::test_custom_ship_constructor()
{
    Ship customBus("Bus", 2, 3);
    QVERIFY (customBus.getLength() == 2);
    QVERIFY (customBus.getWidth() == 3);
    QVERIFY (customBus.toStr() == "Bus");
    QVERIFY (customBus.isPositioned() == false);
    QVERIFY (customBus.getPos().size() == 6);
    QVERIFY (customBus.getPos().at(0).size() == 3);

    Ship customBike("Bike", 1, 2);
    QVERIFY (customBike.getLength() == 1);
    QVERIFY (customBike.getWidth() == 2);
    QVERIFY (customBike.toStr() == "Bike");
    QVERIFY (customBike.isPositioned() == false);
    QVERIFY (customBike.getPos().size() == 2);
    QVERIFY (customBike.getPos().at(0).size() == 3);

    Ship customCar("Car", 1, 3);
    QVERIFY (customCar.getLength() == 1);
    QVERIFY (customCar.getWidth() == 3);
    QVERIFY (customCar.toStr() == "Car");
    QVERIFY (customCar.isPositioned() == false);
    QVERIFY (customCar.getPos().size() == 3);
    QVERIFY (customCar.getPos().at(0).size() == 3);

    Ship customShip("Custom", 1, 1);
    QVERIFY (customShip.getLength() == 1);
    QVERIFY (customShip.getWidth() == 1);
    QVERIFY (customShip.toStr() == "Custom");
    QVERIFY (customShip.isPositioned() == false);
    QVERIFY (customShip.getPos().size() == 1);
    QVERIFY (customShip.getPos().at(0).size() == 3);

}

void TestBattleShip::test_custom_ship_constructor_exceptions()
{
    QVERIFY_EXCEPTION_THROWN(Ship error1("", 1, 2), ShipException);
    QVERIFY_EXCEPTION_THROWN(Ship error1("car", 0, 2), ShipException);
    QVERIFY_EXCEPTION_THROWN(Ship error1("", 1, 0), ShipException);
}

void TestBattleShip::test_place_ship()
{
    Ship customShip("Bus", 2, 3);
    customShip.placeShip(1, 2, true);
    vector<vector<int> > posi = customShip.getPos();
    QVERIFY(posi[0][0] == 1 && posi[0][1] == 2);
    QVERIFY(posi[1][0] == 2 && posi[1][1] == 2);
    QVERIFY(posi[2][0] == 1 && posi[2][1] == 3);
    QVERIFY(posi[3][0] == 2 && posi[3][1] == 3);
    QVERIFY(posi[4][0] == 1 && posi[4][1] == 4);
    QVERIFY(posi[5][0] == 2 && posi[5][1] == 4);

}

void TestBattleShip::test_ship_get_health(){
    Ship customCar("Car", 3, 4);
    customCar.placeShip(1,1, true);
    QVERIFY(customCar.getHealth() == 12);

    Ship customBike("Bike", 1, 2);
    customBike.placeShip(2, 7, false);
    QVERIFY(customBike.getHealth() == 2);

    Ship customShip("Custom", 8, 4);
    customShip.placeShip(0, 10, false);
    QVERIFY(customShip.getHealth() == 32);
}

void TestBattleShip::test_ship_hit(){
    Ship customCar("Car", 1, 3);
    customCar.placeShip(4, 5, false);
    QVERIFY(customCar.hit(4, 5) == true);

    Ship customBike("Bike", 1, 2);
    customBike.placeShip(2, 7, false);
    QVERIFY(customBike.hit(4, 5) == false);
    QVERIFY(customBike.hit(4, 5) == false);

    Ship customShip("Custom", 8, 4);
    customShip.placeShip(0, 10, false);
    QVERIFY(customShip.hit(0, 10) == true);
    QVERIFY(customShip.hit(5, 10) == false);
    QVERIFY(customShip.hit(7, 7) == false);
}

void TestBattleShip::test_ship_overloaded_equals(){
    Ship customShip("Car", 2, 3);
    customShip.placeShip(5, 7, true);
    Ship otherVector = customShip;
    QVERIFY(otherVector.getHealth() == customShip.getHealth());
    QVERIFY(otherVector.getLength() ==  customShip.getLength());
    QVERIFY(otherVector.getWidth() ==  customShip.getWidth());
    QVERIFY(otherVector.toStr() == customShip.toStr());
    QVERIFY(otherVector.isPositioned() == customShip.isPositioned());
    QVERIFY(otherVector.getPos() == customShip.getPos());
    // Testing for aliasing
    otherVector.hit(5, 7);
    QVERIFY((otherVector.getPos() != customShip.getPos()));
    QVERIFY(otherVector.getHealth() != customShip.getHealth());


    Ship customShip2("Custom", 5, 9);
    customShip2.placeShip(0, 0, false);
    Ship otherVector2 = customShip2;
    QVERIFY(otherVector2.getHealth() == customShip2.getHealth());
    QVERIFY(otherVector2.getLength() ==  customShip2.getLength());
    QVERIFY(otherVector2.getWidth() ==  customShip2.getWidth());
    QVERIFY(otherVector2.toStr() == customShip2.toStr());
    QVERIFY(otherVector2.isPositioned() == customShip2.isPositioned());
    QVERIFY(otherVector2.getPos() == customShip2.getPos());
    // Testing for aliasing
    otherVector2.hit(0, 0);
    QVERIFY((otherVector2.getPos() != customShip2.getPos()));
    QVERIFY(otherVector2.getHealth() != customShip2.getHealth());
}

void TestBattleShip::test_ship_copy_constructor(){
    Ship customShip("Car", 1, 5);
    customShip.placeShip(2, 2, true);
    Ship copyShip(customShip);
    QVERIFY(copyShip.getHealth() == customShip.getHealth());
    QVERIFY(copyShip.getLength() ==  customShip.getLength());
    QVERIFY(copyShip.getWidth() ==  customShip.getWidth());
    QVERIFY(copyShip.toStr() == customShip.toStr());
    QVERIFY(copyShip.isPositioned() == customShip.isPositioned());
    QVERIFY(copyShip.getPos() == customShip.getPos());
    // Testing for aliasing
    copyShip.hit(2, 2);
    QVERIFY(copyShip.getPos() != customShip.getPos());
    QVERIFY(copyShip.getHealth() != customShip.getHealth());

    Ship customShip2("Bike", 1, 1);
    customShip2.placeShip(19, 2, false);
    Ship copyShip2(customShip2);
    QVERIFY(copyShip2.getHealth() == customShip2.getHealth());
    QVERIFY(copyShip2.getLength() ==  customShip2.getLength());
    QVERIFY(copyShip2.getWidth() ==  customShip2.getWidth());
    QVERIFY(copyShip2.toStr() == customShip2.toStr());
    QVERIFY(copyShip2.isPositioned() == customShip2.isPositioned());
    QVERIFY(copyShip2.getPos() == customShip2.getPos());
    // Testing for aliasing
    copyShip2.hit(19, 2);
    QVERIFY(copyShip2.getPos() != customShip2.getPos());
    QVERIFY(copyShip2.getHealth() != customShip2.getHealth());
}

void TestBattleShip::test_custom_grid_constructor(){
    Grid customGrid("abc", 99);
    QVERIFY (customGrid.getPlayerName() == "abc");
    QVERIFY (customGrid.getGrid().size() == 99);
    QVERIFY (customGrid.getSunkCount() == 0);
    QVERIFY (customGrid.getShots() == "0");
    QVERIFY (customGrid.getHits() == "0");

    Grid customGrid2("def", 20);
    QVERIFY (customGrid2.getPlayerName() == "def");
    QVERIFY (customGrid2.getGrid().size() == 20);
    QVERIFY (customGrid2.getSunkCount() == 0);
    QVERIFY (customGrid2.getShots() == "0");
    QVERIFY (customGrid2.getHits() == "0");
}

void TestBattleShip::test_grid_exception(){
    QVERIFY_EXCEPTION_THROWN(Grid errorGrid("hey", -2), GridException);
    QVERIFY_EXCEPTION_THROWN(Grid errorGrid("hey", 4), GridException);
    QVERIFY_EXCEPTION_THROWN(Grid errorGrid("hey", 1000000000000000000), GridException);
    QVERIFY_EXCEPTION_THROWN(Grid errorGrid("hey", 101), GridException);
}

void TestBattleShip::test_grid_shoot(){
    Grid customGrid("abcde", 40);
    Ship ship("Bike", 1, 2);
    ship.placeShip(1, 2, true);
    customGrid.addShip(ship);
    customGrid.shoot(1, 2);
    QVERIFY (customGrid.getSunkCount() == 0);
    QVERIFY (customGrid.isWon() == false);
    QVERIFY (customGrid.getHits() == "1");
    QVERIFY (customGrid.getAccuracy() == "100 %");
    customGrid.shoot(1, 39);
    QVERIFY (customGrid.getSunkCount() == 0);
    QVERIFY (customGrid.isWon() == false);
    QVERIFY (customGrid.getHits() == "1");
    QVERIFY (customGrid.getAccuracy() == "50 %");
    customGrid.shoot(1, 3);
    QVERIFY (customGrid.getSunkCount() == 1);
    QVERIFY (customGrid.isWon() == true);
    QVERIFY (customGrid.getHits() == "2");
    QVERIFY (customGrid.getAccuracy() == "66 %");
}

void TestBattleShip::test_grid_shoot_exception(){
    Grid customGrid("abcdefghi", 41);
    QVERIFY_EXCEPTION_THROWN(customGrid.shoot(3, 42), GridException);
    QVERIFY_EXCEPTION_THROWN(customGrid.shoot(-3, 42), GridException);
    QVERIFY_EXCEPTION_THROWN(customGrid.shoot(100, 42), GridException);
}

void TestBattleShip::test_grid_sunk(){
    Ship ship("Bike", 1, 2);
    ship.placeShip(1, 2, true);
    Grid customGrid("heyyy", 11);
    customGrid.addShip(ship);
    customGrid.shoot(1, 2);
    customGrid.shoot(1, 3);
    QVERIFY (customGrid.isWon());
    QVERIFY (customGrid.getSunkCount() == 1);
    QVERIFY (customGrid.getHits() == "2");
    QVERIFY (customGrid.getAccuracy() == "100 %");
    QVERIFY (customGrid.getMostRecentlySunkShipName() == "Bike");

    Grid customGrid2("heyyy", 11);
    Ship ship2("Car", 2, 1);
    ship2.placeShip(5, 5, true);
    customGrid2.addShip(ship2);
    customGrid2.shoot(5, 5);
    customGrid2.shoot(6, 5);
    QVERIFY (customGrid2.isWon());
    QVERIFY (customGrid2.getSunkCount() == 1);
    QVERIFY (customGrid2.getHits() == "2");
    QVERIFY (customGrid2.getAccuracy() == "100 %");
    QVERIFY (customGrid2.getMostRecentlySunkShipName() == "Car");

}

QTEST_APPLESS_MAIN(TestBattleShip)
