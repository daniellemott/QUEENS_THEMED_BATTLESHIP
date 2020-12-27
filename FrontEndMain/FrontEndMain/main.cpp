#include "mainwindow.h"
#include <QApplication>

#include "Grid.h"
#include "Ship.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow m;
    m.show();
    return a.exec();
}
