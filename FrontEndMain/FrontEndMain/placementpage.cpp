#include "placementpage.h"
#include "ui_placementpage.h"
#include <QTextStream>
#include <iostream>
#include <time.h>

PlacementPage::PlacementPage(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::PlacementPage)
{
    ui->setupUi(this);
    main = parent;
    setGrid();
    refreshShipList();

}

PlacementPage::~PlacementPage()
{
    delete ui;
}

void PlacementPage::on_backButtonStartScreen_clicked()
{
    MenuPage *menu = new MenuPage(main);
    main->setCentralWidget(menu);
    delete this;
}

void PlacementPage::on_doneButtonStartScreen_clicked()
{
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    Player &player = main->getActivePlayer();
    if (ui->shipList->count() == 0){
        if (main->getActive()){
            //main->buttonBoard.clear();
            bboard.clear();
            main->setActive(false);
            //main->alreadyPlaced = false;
            if (main->getCpuOn()){ //If user is playing against CPU
                while (main->ships2.length() > 0) {
                    try {
                        Coordinates cpuCords = cpuPlacementCords();
                        main->ships2[0].placeShip(cpuCords.x, cpuCords.y, cpuCords.direction);
                        main->grids[1].addShip(main->ships2[0]);
                        main->ships2.erase(main->ships2.begin() + 0);
                    } catch (ShipException& e) {
                        main->ships2[0].positionShip(false);
                    }
                }
                main->setActive(true);
                bboard.clear();
                cout << main->grids[0].printGrid(true) << endl;
                cout << main->grids[1].printGrid(true) << endl;
                ShotPage *shot = new ShotPage(main);
                main->setCentralWidget(shot);
            } else { //If user is playing by himself
                PlacementPage *p2place = new PlacementPage(main);
                main->setCentralWidget(p2place);
            }
        }else{
            main->setActive(true);
            bboard.clear();
            //main->buttonBoard.clear();
            cout << main->grids[0].printGrid(true) << endl;
            cout << main->grids[1].printGrid(true) << endl;
            ShotPage *shot = new ShotPage(main);
            main->setCentralWidget(shot);
        }
        delete this;
    }
}

void PlacementPage::setGrid(){
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    Player &player = main->getActivePlayer();
    int gridHeight = ui->gridFrame->height();
    int gridWidth = ui->gridFrame->width();
    const QSize btnSize = QSize(gridHeight/main->getBoardSize(),gridWidth/main->getBoardSize());
    for (int i = 0; i < main->getBoardSize(); i++){
        QVector<QPushButton*> temp;
                    for (int j = 0; j < main->getBoardSize(); j++){
                        QPushButton *button = new QPushButton();
                        button->setText(QString::number(j)+""+QString::number(i));
                        button->sizePolicy().setHeightForWidth(true);
                        button->setStyleSheet("QPushButton{"
                                              "font: 18pt 'MS Shell Dlg 2';"
                                              "color: #333;"
                                              "border: 2px solid #555;"
                                              "background-color: rgb(255,255,255);}"

                                          "QPushButton:hover {background-color: rgb(120,120,120);}"
                        );
                        button->setFixedSize(btnSize);
                        connect(button,&QPushButton::clicked,[this,button]{on_gridClick(button);});
                        ui->buttonGrid->addWidget(button,i,j);
                        temp.append(button);
                    }
                    bboard.append(temp);
                    //main->buttonBoard.append(temp);
                }
    ui->indicatorLabel->setText(player.name);
}


void PlacementPage::clearGrid(){
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    for (int i = 0; i < bboard.size(); i++){
                    for (int j = 0; j < bboard[i].size(); j++){
                        ui->buttonGrid->layout()->removeWidget(bboard[i][j]);
                    }
                }
    //main->buttonBoard.size()
}


void PlacementPage::initializeBoardButtons(Coordinates& cord, QPushButton *button){
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    if (ui->directionCB->isChecked()){
        cord.direction = 0;
    } else {
        cord.direction = 1;
    }
    for (int i = 0; i < bboard.size(); i++){
                    for (int j = 0; j < bboard[i].size(); j++){
                        if (bboard[i][j] == button){
                             cord.x = i;
                             cord.y = j;
                        }
                    }
                }
}

void PlacementPage::on_gridClick(QPushButton *button){
    QTextStream out(stdout);
    Coordinates cord;
    string type;
    int shipIndex;
    Ship tempShip;

    cord.x = 0;
    cord.y = 0;
    cord.direction = 0;

    initializeBoardButtons(cord, button);

    shipIndex = ui->shipList->currentRow();

    if (shipIndex == -1){
        shipIndex = 0;
    }

    if (ui->shipList->count() == 0)
        return;

    try {
        if(main->getActive()){
            main->ships1[shipIndex].placeShip(cord.x, cord.y, cord.direction);
            main->grids[0].addShip(main->ships1[shipIndex]);
            main->ships1.erase(main->ships1.begin() + shipIndex);
        }else{
            main->ships2[shipIndex].placeShip(cord.x, cord.y, cord.direction);
            main->grids[1].addShip(main->ships2[shipIndex]);
            main->ships2.erase(main->ships2.begin() + shipIndex);
        }

    } catch (ShipException& e) {
        if (main->getActive()){
            main->ships1[shipIndex].positionShip(false);
        }
        else {
            main->ships2[shipIndex].positionShip(false);
        }
        cerr << e.what() << endl;
        return;
    }
    refreshShipList();
    loadShotGrid(main->grids[(int)(!main->getActive())], true);
} // end on_gridClick

void PlacementPage::loadShotGrid(Grid currentGrid, bool showShips){
    vector<vector<char> > tempGrid = currentGrid.getGrid();
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();

    for (int i = 0; i < bboard.size(); i++){
                    for (int j = 0; j < bboard[i].size(); j++){
                        // ship has been shot
                        if (tempGrid[i][j] == 'X'){
                              bboard[i][j]->setStyleSheet("QPushButton{"
                                    "font: 18pt 'MS Shell Dlg 2';"
                                    "color: #333;"
                                    "border: 2px solid #555;"
                                    "background-color: rgb(255,0,0);}"

                                     "QPushButton:hover {background-color: rgb(120,120,120);}");
                        }
                        // if empty the shot wil
                        else if (tempGrid[i][j] == 'O' || tempGrid[i][j] == 'S'){
                            if (showShips && tempGrid[i][j] == 'S'){
                                bboard[i][j]->setStyleSheet("QPushButton{"
                                                                 "font: 18pt 'MS Shell Dlg 2';"
                                                                 "color: #333;"
                                                                 "border: 2px solid #555;"
                                                                 "background-color: rgb(0,255,0);}"

                                                             "QPushButton:hover {background-color: rgb(120,120,120);}");
                            } else {
                                bboard[i][j]->setStyleSheet("QPushButton{"

                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(255,255,255);}"

                                                         "QPushButton:hover {background-color: rgb(120,120,120);}");
                            }
                            // if shit has been hit
                        } else if (tempGrid[i][j] == 'H'){
                            bboard[i][j]->setStyleSheet("QPushButton{"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(128,0,128);}"

                                                         "QPushButton:hover {background-color: rgb(120,120,120);}");
                        } else {
                            bboard[i][j]->setStyleSheet("QPushButton{"
                                                        "font: 18pt 'MS Shell Dlg 2';"
                                                        "color: #333;"
                                                        "border: 2px solid #555;"
                                                        "background-color: rgb(120,120,120);}"
                                                         "QPushButton:hover {background-color: rgb(120,120,120);}");
                        }
                    }
                }
}

void PlacementPage::refreshShipList(QVector<Ship>& shipsIn){
    ui->shipList->clear();  //this may cause memory leaks due to QListWidgetItems being stored on heap

    for(int i = 0; i < shipsIn.length(); i++){
        QListWidgetItem* temp = new QListWidgetItem(QString::fromStdString(shipsIn[i].toStr()));
        ui->shipList->insertItem(i, temp);
    }
}

void PlacementPage::refreshShipList(){
    if(main->getActive())
        refreshShipList(main->ships1);
    else
       refreshShipList(main->ships2);
}


Coordinates PlacementPage::cpuPlacementCords(){
    Coordinates randCord;
    randCord.x = rand() % main->getBoardSize();
    randCord.y = rand() % main->getBoardSize();
    randCord.direction = rand() % 2;
    return randCord;
}
