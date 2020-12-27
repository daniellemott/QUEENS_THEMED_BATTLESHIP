#ifndef WINNERPAGE_H
#define WINNERPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class WinnerPage;
}

class WinnerPage : public QWidget
{
    Q_OBJECT

public:
    explicit WinnerPage(MainWindow *parent = nullptr);
    ~WinnerPage();
    void resetShipCounts();

private slots:
    void on_MainMenuButton_clicked();

    void on_NewGameButton_clicked();


    void on_ExitGameButton_clicked();

private:
    Ui::WinnerPage *ui;
    MainWindow *main;
};

#endif // WINNERPAGE_H
