#include "winnerpage.h"
#include "ui_winnerpage.h"
#include "menupage.h"
#include "placementpage.h"

WinnerPage::WinnerPage(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::WinnerPage)
{
    ui->setupUi(this);
    main = parent;
    ui->winnerLabel_3->setText(main->getWinnerName());
}

WinnerPage::~WinnerPage()
{
    delete ui;
}

void WinnerPage::on_MainMenuButton_clicked()
{
    MenuPage* menu = new MenuPage(main);
    main->setCentralWidget(menu);
    delete this;
}

void WinnerPage::on_NewGameButton_clicked()
{
    main->assignShips();
    main->clearButtonBoard();
    main->setActive(true);
    string name = "name";
    Grid p1Grid(main->playerOne.name.toStdString(), main->getBoardSize());
    Grid p2Grid(main->playerTwo.name.toStdString(), main->getBoardSize());
    main->grids.clear();
    main->grids.append(p1Grid);
    main->grids.append(p2Grid);

    PlacementPage* placement = new PlacementPage(main);
    main->setCentralWidget(placement);
    delete this;
}

void WinnerPage::on_ExitGameButton_clicked()
{
    main->close();
}
