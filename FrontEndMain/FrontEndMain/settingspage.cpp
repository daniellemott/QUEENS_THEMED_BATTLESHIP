#include "settingspage.h"
#include "ui_settingspage.h"
#include "menupage.h"
#include <iostream>


settingspage::settingspage(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::settingspage)
{
    ui->setupUi(this);
    main = parent;

    ui->sizeSlider->setMinimum(MIN_GRID);
    ui->sizeSlider->setMaximum(MAX_GRID);

    ui->difficultySlider->setMinimum(1);
    ui->difficultySlider->setMaximum(main->getBoardSize());

    ui->sizeValue->setText(QString::number(main->getBoardSize()));
    ui->singlePlayerCB->setChecked(main->getCpuOn());

    //QListWidget is called shipList

    ui->customLength->setMaximum(main->getBoardSize()/2);
    ui->customWidth->setMaximum(main->getBoardSize()/2 - 1);

    refreshShipList();

}

settingspage::~settingspage()
{
    delete ui;
}

void settingspage::on_backButtonOptions_clicked()
{
    main->setCpuOn(ui->singlePlayerCB->isChecked());
    main->setCpuDifficulty(ui->difficultySlider->value());
    MenuPage *menu = new MenuPage(main);
    main->setCentralWidget(menu);
    delete this;
}

void settingspage::on_sizeSlider_sliderMoved(int position)
{
    main->setBoardSize(position);
    ui->difficultySlider->setMaximum(main->getBoardSize());
    ui->sizeValue->setText(QString::number(position));

    ui->customLength->setMaximum(main->getBoardSize()/2);
    ui->customWidth->setMaximum(main->getBoardSize()/2 - 1);
}

void settingspage::refreshShipList(){
    ui->shipList->clear();  //this may cause memory leaks due to QListWidgetItems being stored on heap

    for(int i = 0; i < main->customShips.length(); i++){
        QListWidgetItem* temp = new QListWidgetItem(QString::fromStdString(main->customShips[i].toStr()));
        ui->shipList->insertItem(i, temp);
    }
}



void settingspage::on_addCustomShip_clicked()
{
    string type = ui->customName->text().toStdString();
    int length = ui->customLength->value();
    int width = ui->customWidth->value();

    Ship temp(type, length, width);
    main->customShips.append(temp);

    refreshShipList();
}

void settingspage::on_deleteCustomShip_clicked()
{
    int index = ui->shipList->currentRow();
    main->customShips.erase(main->customShips.begin() + index);
    refreshShipList();
}

void settingspage::on_customLength_valueChanged(int arg1)
{
    ui->customWidth->setMaximum(arg1 - 1);
}

void settingspage::on_addBike_clicked()
{

    main->customShips.push_back(Ship("Bike", 2, 1));
    refreshShipList();
}

void settingspage::on_addCar_clicked()
{
    main->customShips.push_back(Ship("Car", 3, 1));
    refreshShipList();
}

void settingspage::on_addBus_clicked()
{
    main->customShips.push_back(Ship("Bus", 3, 2));
    refreshShipList();
}
