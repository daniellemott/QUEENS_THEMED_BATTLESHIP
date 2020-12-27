#ifndef HELPPAGE_H
#define HELPPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class HelpPage;
}

class HelpPage : public QWidget
{
    Q_OBJECT

public:
    explicit HelpPage(MainWindow *parent = nullptr);
    ~HelpPage();

private slots:
    void on_backButtonHelp_clicked();

private:
    Ui::HelpPage *ui;
    MainWindow *main;
};

#endif // HELPPAGE_H
