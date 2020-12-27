/********************************************************************************
** Form generated from reading UI file 'shotpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOTPAGE_H
#define UI_SHOTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShotPage
{
public:
    QLabel *ShootScreenTitle;
    QFrame *ShootingFrame;
    QWidget *gridLayoutWidget_2;
    QGridLayout *ShootingGrid;
    QLabel *shipsRemainLabel;
    QPushButton *shootScreenEndTurn;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *customSunkLabel;
    QLabel *bikesSunkLabel;
    QLabel *bikeSunkCount;
    QLabel *carSunkCount;
    QLabel *busSunkCount;
    QLabel *customSunkCount;
    QLabel *carsSunkLabel;
    QLabel *busesSunkLabel;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *totalHitsCount;
    QLabel *totalHitsLabel;
    QLabel *totalShotsCount;
    QLabel *accuracyCount;
    QLabel *accuracyLabel;
    QLabel *totalShotsLabel;
    QLabel *shipsRemainLabel_2;
    QFrame *indicatorFrame;
    QLabel *indiTitleLabelShotPage;
    QLabel *turnIndiShotPage;

    void setupUi(QWidget *ShotPage)
    {
        if (ShotPage->objectName().isEmpty())
            ShotPage->setObjectName(QStringLiteral("ShotPage"));
        ShotPage->resize(800, 600);
        ShotPage->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        ShootScreenTitle = new QLabel(ShotPage);
        ShootScreenTitle->setObjectName(QStringLiteral("ShootScreenTitle"));
        ShootScreenTitle->setGeometry(QRect(120, 20, 311, 41));
        ShootScreenTitle->setStyleSheet(QLatin1String("font: 75 22pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 255, 255);"));
        ShootScreenTitle->setAlignment(Qt::AlignCenter);
        ShootingFrame = new QFrame(ShotPage);
        ShootingFrame->setObjectName(QStringLiteral("ShootingFrame"));
        ShootingFrame->setGeometry(QRect(30, 80, 500, 500));
        ShootingFrame->setFrameShape(QFrame::StyledPanel);
        ShootingFrame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_2 = new QWidget(ShootingFrame);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 491, 491));
        ShootingGrid = new QGridLayout(gridLayoutWidget_2);
        ShootingGrid->setSpacing(0);
        ShootingGrid->setObjectName(QStringLiteral("ShootingGrid"));
        ShootingGrid->setSizeConstraint(QLayout::SetMaximumSize);
        ShootingGrid->setContentsMargins(0, 0, 0, 0);
        shipsRemainLabel = new QLabel(ShotPage);
        shipsRemainLabel->setObjectName(QStringLiteral("shipsRemainLabel"));
        shipsRemainLabel->setGeometry(QRect(540, 60, 141, 31));
        shipsRemainLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        shipsRemainLabel->setAlignment(Qt::AlignCenter);
        shootScreenEndTurn = new QPushButton(ShotPage);
        shootScreenEndTurn->setObjectName(QStringLiteral("shootScreenEndTurn"));
        shootScreenEndTurn->setGeometry(QRect(570, 520, 191, 41));
        shootScreenEndTurn->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 18pt \"MS Shell Dlg 2\";\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"    border-style: outset;\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
"        );\n"
"    padding: 5px;\n"
"    }\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }\n"
"\n"
"QPushButton:pressed {\n"
"    border-style: inset;\n"
"    background: qradialgradient(\n"
"        cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
"        );\n"
"    }"));
        gridLayoutWidget = new QWidget(ShotPage);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(530, 100, 211, 111));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        customSunkLabel = new QLabel(gridLayoutWidget);
        customSunkLabel->setObjectName(QStringLiteral("customSunkLabel"));
        customSunkLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(customSunkLabel, 3, 0, 1, 1);

        bikesSunkLabel = new QLabel(gridLayoutWidget);
        bikesSunkLabel->setObjectName(QStringLiteral("bikesSunkLabel"));
        bikesSunkLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(bikesSunkLabel, 0, 0, 1, 1);

        bikeSunkCount = new QLabel(gridLayoutWidget);
        bikeSunkCount->setObjectName(QStringLiteral("bikeSunkCount"));
        bikeSunkCount->setMinimumSize(QSize(30, 0));
        bikeSunkCount->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        bikeSunkCount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(bikeSunkCount, 0, 1, 1, 1);

        carSunkCount = new QLabel(gridLayoutWidget);
        carSunkCount->setObjectName(QStringLiteral("carSunkCount"));
        carSunkCount->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        carSunkCount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(carSunkCount, 1, 1, 1, 1);

        busSunkCount = new QLabel(gridLayoutWidget);
        busSunkCount->setObjectName(QStringLiteral("busSunkCount"));
        busSunkCount->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        busSunkCount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(busSunkCount, 2, 1, 1, 1);

        customSunkCount = new QLabel(gridLayoutWidget);
        customSunkCount->setObjectName(QStringLiteral("customSunkCount"));
        customSunkCount->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        customSunkCount->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(customSunkCount, 3, 1, 1, 1);

        carsSunkLabel = new QLabel(gridLayoutWidget);
        carsSunkLabel->setObjectName(QStringLiteral("carsSunkLabel"));
        carsSunkLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(carsSunkLabel, 1, 0, 1, 1);

        busesSunkLabel = new QLabel(gridLayoutWidget);
        busesSunkLabel->setObjectName(QStringLiteral("busesSunkLabel"));
        busesSunkLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(busesSunkLabel, 2, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(ShotPage);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(530, 390, 211, 111));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        totalHitsCount = new QLabel(gridLayoutWidget_3);
        totalHitsCount->setObjectName(QStringLiteral("totalHitsCount"));
        totalHitsCount->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        totalHitsCount->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(totalHitsCount, 1, 1, 1, 1);

        totalHitsLabel = new QLabel(gridLayoutWidget_3);
        totalHitsLabel->setObjectName(QStringLiteral("totalHitsLabel"));
        totalHitsLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(totalHitsLabel, 1, 0, 1, 1);

        totalShotsCount = new QLabel(gridLayoutWidget_3);
        totalShotsCount->setObjectName(QStringLiteral("totalShotsCount"));
        totalShotsCount->setMinimumSize(QSize(30, 0));
        totalShotsCount->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        totalShotsCount->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(totalShotsCount, 0, 1, 1, 1);

        accuracyCount = new QLabel(gridLayoutWidget_3);
        accuracyCount->setObjectName(QStringLiteral("accuracyCount"));
        accuracyCount->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        accuracyCount->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(accuracyCount, 2, 1, 1, 1);

        accuracyLabel = new QLabel(gridLayoutWidget_3);
        accuracyLabel->setObjectName(QStringLiteral("accuracyLabel"));
        accuracyLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(accuracyLabel, 2, 0, 1, 1);

        totalShotsLabel = new QLabel(gridLayoutWidget_3);
        totalShotsLabel->setObjectName(QStringLiteral("totalShotsLabel"));
        totalShotsLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        gridLayout_3->addWidget(totalShotsLabel, 0, 0, 1, 1);

        shipsRemainLabel_2 = new QLabel(ShotPage);
        shipsRemainLabel_2->setObjectName(QStringLiteral("shipsRemainLabel_2"));
        shipsRemainLabel_2->setGeometry(QRect(530, 350, 161, 31));
        shipsRemainLabel_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        shipsRemainLabel_2->setAlignment(Qt::AlignCenter);
        indicatorFrame = new QFrame(ShotPage);
        indicatorFrame->setObjectName(QStringLiteral("indicatorFrame"));
        indicatorFrame->setGeometry(QRect(560, 220, 171, 121));
        indicatorFrame->setStyleSheet(QLatin1String("QFrame#indicatorFrame{\n"
"	border: 5px solid white;\n"
"	border-radius: 8px;\n"
"};"));
        indicatorFrame->setFrameShape(QFrame::StyledPanel);
        indicatorFrame->setFrameShadow(QFrame::Raised);
        indiTitleLabelShotPage = new QLabel(indicatorFrame);
        indiTitleLabelShotPage->setObjectName(QStringLiteral("indiTitleLabelShotPage"));
        indiTitleLabelShotPage->setGeometry(QRect(20, 10, 141, 21));
        indiTitleLabelShotPage->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        indiTitleLabelShotPage->setAlignment(Qt::AlignCenter);
        turnIndiShotPage = new QLabel(indicatorFrame);
        turnIndiShotPage->setObjectName(QStringLiteral("turnIndiShotPage"));
        turnIndiShotPage->setGeometry(QRect(40, 40, 91, 61));
        turnIndiShotPage->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 24pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        turnIndiShotPage->setAlignment(Qt::AlignCenter);

        retranslateUi(ShotPage);

        QMetaObject::connectSlotsByName(ShotPage);
    } // setupUi

    void retranslateUi(QWidget *ShotPage)
    {
        ShotPage->setWindowTitle(QApplication::translate("ShotPage", "Form", Q_NULLPTR));
        ShootScreenTitle->setText(QApplication::translate("ShotPage", "Shooting Screen", Q_NULLPTR));
        shipsRemainLabel->setText(QApplication::translate("ShotPage", "Sunk Ships", Q_NULLPTR));
        shootScreenEndTurn->setText(QApplication::translate("ShotPage", "End Turn", Q_NULLPTR));
        customSunkLabel->setText(QApplication::translate("ShotPage", "Custom Ships Sunk: ", Q_NULLPTR));
        bikesSunkLabel->setText(QApplication::translate("ShotPage", "Bikes Sunk: ", Q_NULLPTR));
        bikeSunkCount->setText(QApplication::translate("ShotPage", "0", Q_NULLPTR));
        carSunkCount->setText(QApplication::translate("ShotPage", "0", Q_NULLPTR));
        busSunkCount->setText(QApplication::translate("ShotPage", "0", Q_NULLPTR));
        customSunkCount->setText(QApplication::translate("ShotPage", "0", Q_NULLPTR));
        carsSunkLabel->setText(QApplication::translate("ShotPage", "Cars Sunk:", Q_NULLPTR));
        busesSunkLabel->setText(QApplication::translate("ShotPage", "Buses Sunk:", Q_NULLPTR));
        totalHitsCount->setText(QApplication::translate("ShotPage", "0", Q_NULLPTR));
        totalHitsLabel->setText(QApplication::translate("ShotPage", "Total Hits", Q_NULLPTR));
        totalShotsCount->setText(QApplication::translate("ShotPage", "0", Q_NULLPTR));
        accuracyCount->setText(QApplication::translate("ShotPage", "0", Q_NULLPTR));
        accuracyLabel->setText(QApplication::translate("ShotPage", "Shot Accuracy", Q_NULLPTR));
        totalShotsLabel->setText(QApplication::translate("ShotPage", "Total Shots", Q_NULLPTR));
        shipsRemainLabel_2->setText(QApplication::translate("ShotPage", "Player Stats", Q_NULLPTR));
        indiTitleLabelShotPage->setText(QApplication::translate("ShotPage", "Turn Indicator:", Q_NULLPTR));
        turnIndiShotPage->setText(QApplication::translate("ShotPage", "P2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShotPage: public Ui_ShotPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOTPAGE_H
