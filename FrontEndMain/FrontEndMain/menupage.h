#ifndef MENUPAGE_H
#define MENUPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "mainwindow.h"
#include "helppage.h"
#include "mainwindow.h"

namespace Ui {
class MenuPage;
}

class MenuPage : public QWidget
{
    Q_OBJECT

public:
    explicit MenuPage(MainWindow *parent = nullptr);
    ~MenuPage();
    void addShipsToBoard();

private slots:
    void on_StartGameButton_clicked();

    void on_optionsButton_clicked();

    void on_helpButton_clicked();

private:
    Ui::MenuPage *ui;
    MainWindow *main;
};

#endif // MENUPAGE_H
