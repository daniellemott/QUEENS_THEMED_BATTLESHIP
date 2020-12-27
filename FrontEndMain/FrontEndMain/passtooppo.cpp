#include "passtooppo.h"
#include "ui_passtooppo.h"
#include "playerboardpage.h"
PassToOppo::PassToOppo(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::PassToOppo)
{
    ui->setupUi(this);
    main = parent;
}

PassToOppo::~PassToOppo()
{
    delete ui;
}

void PassToOppo::on_passWindowOkayButton_clicked()
{
    /*if (main->getActive()){
        main->setActive(false);
    } else {main->setActive(true);}
    QVector<QVector<QPushButton*>> &bboard = main->getButtonBoard();
    //main->buttonBoard.clear();
    bboard.clear();
    main->setAlreadyShot(false);
    ShotPage* shot = new ShotPage(main);
    main->setCentralWidget(shot);
    delete this;*/
    //Send to shot screen
    if (main->getActive()){
        main->setActive(false);
    } else {main->setActive(true);}
    PlayerBoardPage* playerBoard = new PlayerBoardPage(main);
    main->setCentralWidget(playerBoard);
    delete this;

}
