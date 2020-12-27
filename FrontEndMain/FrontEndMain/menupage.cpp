#include "menupage.h"
#include "ui_menupage.h"
#include "placementpage.h"
#include "settingspage.h"
#include <iostream>
#include <QTextStream>
MenuPage::MenuPage(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::MenuPage)
{
    ui->setupUi(this);
    main = parent;
}

MenuPage::~MenuPage()
{
    delete ui;
}

void MenuPage::on_StartGameButton_clicked()
{
    main->setActive(true);
    main->playerOne.name = "P1";
    main->playerTwo.name = "P2";
    //main->alreadyPlaced = true;
    Grid p1Grid(main->playerOne.name.toStdString(), main->getBoardSize());
    Grid p2Grid(main->playerTwo.name.toStdString(), main->getBoardSize());
    main->grids.clear();
    main->grids.append(p1Grid);
    main->grids.append(p2Grid);
    main->clearButtonBoard();

    main->assignShips();    //replaces addShipsToBoard

    PlacementPage *placement = new PlacementPage(main);
    main->setCentralWidget(placement);
    delete this;
}

void MenuPage::on_optionsButton_clicked()
{
    settingspage *options = new settingspage(main);
    main->setCentralWidget(options);
    delete this;
}

void MenuPage::on_helpButton_clicked()
{
    HelpPage *help = new HelpPage(main);
    main->setCentralWidget(help);
    delete this;
}


