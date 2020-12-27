#ifndef PLACEMENTPAGE_H
#define PLACEMENTPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "menupage.h"
#include "passtooppo.h"
#include "mainwindow.h"

namespace Ui {
class PlacementPage;
}

class PlacementPage : public QWidget
{
    Q_OBJECT

public:
    explicit PlacementPage(MainWindow *parent = nullptr);
    void setGrid(); // Set the buttonGrid on the place ships page
    void clearGrid(); // Clear button grid before starting new game
    //Coordinates getShotCords(QPushButton *button);
    void loadShotGrid(Grid currentGrid, bool showShips);
    void initializeBoardButtons(Coordinates& cord, QPushButton *button);
    void on_gridClick(QPushButton *button);
    Coordinates cpuPlacementCords();
    ~PlacementPage();

private slots:
    void on_backButtonStartScreen_clicked();
    void on_doneButtonStartScreen_clicked();

private:
    Ui::PlacementPage *ui;
    MainWindow *main;
    void refreshShipList(QVector<Ship>& shipsIn);
    void refreshShipList();

};

#endif // PLACEMENTPAGE_H
