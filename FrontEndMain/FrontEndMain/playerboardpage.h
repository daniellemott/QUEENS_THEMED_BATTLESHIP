#ifndef PLAYERBOARDPAGE_H
#define PLAYERBOARDPAGE_H

#include <QWidget>
#include "Grid.h"
#include "mainwindow.h"

namespace Ui {
class PlayerBoardPage;
}

class PlayerBoardPage : public QWidget
{
    Q_OBJECT

public:
    explicit PlayerBoardPage(MainWindow *parent = nullptr);
    ~PlayerBoardPage();
    void loadShotGrid(Grid currentGrid, bool showShips, string shipType);
    void createPlayerGrid();

private slots:
    void on_continueButton_clicked();

private:
    Ui::PlayerBoardPage *ui;
    MainWindow *main;

    QVector<QVector<QPushButton*>> playerBBoard;
};

#endif // PLAYERBOARDPAGE_H
