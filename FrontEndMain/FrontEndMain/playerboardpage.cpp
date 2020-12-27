#include "playerboardpage.h"
#include "ui_playerboardpage.h"
#include "shotpage.h"

PlayerBoardPage::PlayerBoardPage(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::PlayerBoardPage)
{
    ui->setupUi(this);
    main = parent;
    createPlayerGrid();
    if (main->getActive()){
        loadShotGrid(main->grids[0],true,"str");
    } else {
        loadShotGrid(main->grids[1],true,"str");
    }
}

PlayerBoardPage::~PlayerBoardPage()
{
    delete ui;
}

void PlayerBoardPage::on_continueButton_clicked()
{
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    bboard.clear();
    ShotPage* shot = new ShotPage(main);
    main->setCentralWidget(shot);
    delete this;
}



void PlayerBoardPage::loadShotGrid(Grid currentGrid, bool showShips, string shipType){
    vector<vector<char> > tempGrid = currentGrid.getGrid();
    QVector<QVector<QPushButton*>> &bboard = playerBBoard;

    for (int i = 0; i < bboard.size(); i++){
                    for (int j = 0; j < bboard[i].size(); j++){
                        // ship has been shot
                        if (tempGrid[i][j] == 'X'){
                              bboard[i][j]->setStyleSheet("QPushButton{"
                                    "font: 18pt 'MS Shell Dlg 2';"
                                    "color: #333;"
                                    "border: 2px solid #555;"
                                    "background-color: rgb(255,0,0);}");
                        }
                        // if empty the shot wil
                        else if (tempGrid[i][j] == 'O' || tempGrid[i][j] == 'S'){
                            if (showShips && tempGrid[i][j] == 'S'){
                                bboard[i][j]->setStyleSheet("QPushButton{"
                                                                 "font: 18pt 'MS Shell Dlg 2';"
                                                                 "color: #333;"
                                                                 "border: 2px solid #555;"
                                                                 "background-color: rgb(0,255,0);}");
                            } else {
                                bboard[i][j]->setStyleSheet("QPushButton{"

                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(255,255,255);}");
                            }
                            // if shit has been hit
                        } else if (tempGrid[i][j] == 'H'){
                            bboard[i][j]->setStyleSheet("QPushButton{"
                                                             "font: 18pt 'MS Shell Dlg 2';"
                                                             "color: #333;"
                                                             "border: 2px solid #555;"
                                                             "background-color: rgb(128,0,128);}");
                        } else {
                            bboard[i][j]->setStyleSheet("QPushButton{"
                                                        "font: 18pt 'MS Shell Dlg 2';"
                                                        "color: #333;"
                                                        "border: 2px solid #555;"
                                                        "background-color: rgb(120,120,120);}");
                        }
                    }
                }
}

void PlayerBoardPage::createPlayerGrid(){
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    int gridHeight = ui->boardFrame->height();
    int gridWidth = ui->boardFrame->width();
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

                                          "QPushButton:hover {background-color: rgb(255,0,0);}"
                        );
                        button->setFixedSize(btnSize);
                        ui->boardGrid->addWidget(button,i,j);
                        temp.append(button);
                    }
                    playerBBoard.append(temp);
                    bboard.append(temp);
                }
}
