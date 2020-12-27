#ifndef TST_TESTBATTLESHIP_H
#define TST_TESTBATTLESHIP_H

#include <QtTest/QtTest>

class TestBattleShip : public QObject
{
    Q_OBJECT

public:
    TestBattleShip();
    ~TestBattleShip();

private slots:
    // Ship class
    void test_default_ship_constructor();
    void test_custom_ship_constructor();
    void test_custom_ship_constructor_exceptions();
    void test_place_ship();
    void test_ship_get_health();
    void test_ship_hit();
    void test_ship_overloaded_equals();
    void test_ship_copy_constructor();
    // Grid class
    void test_custom_grid_constructor();
    void test_grid_exception();
    void test_grid_shoot();
    void test_grid_shoot_exception();
    void test_grid_sunk();
};

#endif // TST_TESTBATTLESHIP_H
