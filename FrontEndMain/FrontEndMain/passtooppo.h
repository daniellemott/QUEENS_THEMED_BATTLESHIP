#ifndef PASSTOOPPO_H
#define PASSTOOPPO_H

#include <QWidget>
#include <QMainWindow>
#include "shotpage.h"
#include "mainwindow.h"

namespace Ui {
class PassToOppo;
}

class PassToOppo : public QWidget
{
    Q_OBJECT

public:
    explicit PassToOppo(MainWindow *parent = nullptr);
    ~PassToOppo();

private slots:
    void on_passWindowOkayButton_clicked();

private:
    Ui::PassToOppo *ui;
    MainWindow *main;
};

#endif // PASSTOOPPO_H
