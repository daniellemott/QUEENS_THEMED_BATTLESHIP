#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QString>
#include <QPushButton>
#include <Grid.h>
#include <Ship.h>
#include <QMessageBox>



namespace Ui {
class MainWindow;
}

struct Coordinates{
    int x;
    int y;
    int direction;
};

struct Player{
    int carCount;
    int busCount;
    int bikeCount;
    int customCount;
    QString name;
};

struct CustomShip{
    int width;
    int height;
    int count;
};

struct Options{
    int oCars;
    int oBus;
    int oBikes;
    CustomShip oCustom;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    Player& getActivePlayer();
    ~MainWindow();
    //Accessors and Mutators
    int getBoardSize();
    void setBoardSize(int size);
    bool getActive();
    void setActive(bool condition);
    Player getPlayerOne();
    void setPlayerOne(Player tempPlayer);
    Player getPlayerTwo();
    void setPlayerTwo(Player tempPlayer);
    bool getAlreadyShot();
    void setAlreadyShot(bool condition);
    QString getWinnerName();
    void setWinnerName(QString winName);
    QVector<QVector<QPushButton*>>& getButtonBoard();
    void clearButtonBoard();
    void assignShips();
    void setCounts();
    int getTypeCount(QString type);
    bool getCpuOn();
    void setCpuOn(bool condition);
    void setCpuDifficulty(int tempDifficulty);
    int getCpuDifficulty();



    QVector<Ship> ships1;
    QVector<Ship> ships2;
    QVector<Grid> grids;
    QVector<Ship> customShips;
    Player playerOne;
    Player playerTwo;




protected:
    Ui::MainWindow *ui;
    QVector<QVector<QPushButton*>> buttonBoard;
    int boardSize;
    bool activePlayer;
    bool alreadyShot;
    QString winnerName;
    bool cpuOn;
    int cpuDifficulty;
    //QVector<QVector<QPushButton*>> buttonBoard;
    //int boardSize;
    //Player playerOne;
    //Player playerTwo;
    //bool activePlayer; // If true : PlayerOne is active. If false: PlayerTwo is active
    //QVector<Ship> ships1;
    //QVector<Ship> ships2;
    //QVector<Grid> grids;
    //QVector<Ship> customShips;
    //bool shotTurnFlag;
    //bool alreadyShot;
};

#endif // MAINWINDOW_H
