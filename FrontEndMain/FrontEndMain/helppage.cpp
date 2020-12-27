#include "helppage.h"
#include "ui_helppage.h"
#include "menupage.h"

HelpPage::HelpPage(MainWindow *parent) :
    QWidget(parent),
    ui(new Ui::HelpPage)
{
    ui->setupUi(this);
    main = parent;
}

HelpPage::~HelpPage()
{
    delete ui;
}

void HelpPage::on_backButtonHelp_clicked()
{
    MenuPage *menu = new MenuPage(main);
    main->setCentralWidget(menu);
    delete this;
}
