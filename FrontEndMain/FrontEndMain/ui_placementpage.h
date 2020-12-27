/********************************************************************************
** Form generated from reading UI file 'placementpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACEMENTPAGE_H
#define UI_PLACEMENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlacementPage
{
public:
    QPushButton *doneButtonStartScreen;
    QPushButton *backButtonStartScreen;
    QFrame *gridFrame;
    QWidget *gridLayoutWidget;
    QGridLayout *buttonGrid;
    QLabel *ChooseDirectionLabel;
    QLabel *directionDescriptionLabel;
    QLabel *shipTitleLabel;
    QLabel *placeShipLabel;
    QCheckBox *directionCB;
    QListWidget *shipList;
    QFrame *indicatorFrame;
    QLabel *indicatorTitleLabel;
    QLabel *indicatorLabel;

    void setupUi(QWidget *PlacementPage)
    {
        if (PlacementPage->objectName().isEmpty())
            PlacementPage->setObjectName(QStringLiteral("PlacementPage"));
        PlacementPage->resize(800, 600);
        PlacementPage->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        doneButtonStartScreen = new QPushButton(PlacementPage);
        doneButtonStartScreen->setObjectName(QStringLiteral("doneButtonStartScreen"));
        doneButtonStartScreen->setGeometry(QRect(620, 530, 161, 41));
        doneButtonStartScreen->setStyleSheet(QLatin1String("QPushButton {\n"
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
        backButtonStartScreen = new QPushButton(PlacementPage);
        backButtonStartScreen->setObjectName(QStringLiteral("backButtonStartScreen"));
        backButtonStartScreen->setGeometry(QRect(620, 470, 161, 41));
        backButtonStartScreen->setStyleSheet(QLatin1String("QPushButton {\n"
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
        gridFrame = new QFrame(PlacementPage);
        gridFrame->setObjectName(QStringLiteral("gridFrame"));
        gridFrame->setGeometry(QRect(20, 70, 500, 500));
        gridFrame->setFrameShape(QFrame::StyledPanel);
        gridFrame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(gridFrame);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 491, 491));
        buttonGrid = new QGridLayout(gridLayoutWidget);
        buttonGrid->setSpacing(0);
        buttonGrid->setObjectName(QStringLiteral("buttonGrid"));
        buttonGrid->setSizeConstraint(QLayout::SetMaximumSize);
        buttonGrid->setContentsMargins(0, 0, 0, 0);
        ChooseDirectionLabel = new QLabel(PlacementPage);
        ChooseDirectionLabel->setObjectName(QStringLiteral("ChooseDirectionLabel"));
        ChooseDirectionLabel->setGeometry(QRect(530, 220, 161, 31));
        ChooseDirectionLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"font: 16pt \"MS Shell Dlg 2\";"));
        directionDescriptionLabel = new QLabel(PlacementPage);
        directionDescriptionLabel->setObjectName(QStringLiteral("directionDescriptionLabel"));
        directionDescriptionLabel->setGeometry(QRect(540, 250, 251, 31));
        directionDescriptionLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        shipTitleLabel = new QLabel(PlacementPage);
        shipTitleLabel->setObjectName(QStringLiteral("shipTitleLabel"));
        shipTitleLabel->setGeometry(QRect(540, 60, 161, 31));
        shipTitleLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 8pt \"MS Shell Dlg 2\";\n"
"font: 16pt \"MS Shell Dlg 2\";"));
        placeShipLabel = new QLabel(PlacementPage);
        placeShipLabel->setObjectName(QStringLiteral("placeShipLabel"));
        placeShipLabel->setGeometry(QRect(0, 10, 531, 51));
        placeShipLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"text-decoration: underline;\n"
"font: 75 26pt \"MS Shell Dlg 2\";"));
        placeShipLabel->setAlignment(Qt::AlignCenter);
        directionCB = new QCheckBox(PlacementPage);
        directionCB->setObjectName(QStringLiteral("directionCB"));
        directionCB->setGeometry(QRect(530, 300, 171, 19));
        directionCB->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        shipList = new QListWidget(PlacementPage);
        shipList->setObjectName(QStringLiteral("shipList"));
        shipList->setGeometry(QRect(540, 100, 231, 111));
        shipList->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        indicatorFrame = new QFrame(PlacementPage);
        indicatorFrame->setObjectName(QStringLiteral("indicatorFrame"));
        indicatorFrame->setGeometry(QRect(570, 330, 171, 121));
        indicatorFrame->setStyleSheet(QLatin1String("QFrame#indicatorFrame{\n"
"	border: 5px solid white;\n"
"	border-radius: 8px;\n"
"};"));
        indicatorFrame->setFrameShape(QFrame::StyledPanel);
        indicatorFrame->setFrameShadow(QFrame::Raised);
        indicatorTitleLabel = new QLabel(indicatorFrame);
        indicatorTitleLabel->setObjectName(QStringLiteral("indicatorTitleLabel"));
        indicatorTitleLabel->setGeometry(QRect(10, 10, 151, 21));
        indicatorTitleLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        indicatorTitleLabel->setAlignment(Qt::AlignCenter);
        indicatorLabel = new QLabel(indicatorFrame);
        indicatorLabel->setObjectName(QStringLiteral("indicatorLabel"));
        indicatorLabel->setGeometry(QRect(40, 40, 91, 61));
        indicatorLabel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 24pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        indicatorLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(PlacementPage);

        QMetaObject::connectSlotsByName(PlacementPage);
    } // setupUi

    void retranslateUi(QWidget *PlacementPage)
    {
        PlacementPage->setWindowTitle(QApplication::translate("PlacementPage", "Form", Q_NULLPTR));
        doneButtonStartScreen->setText(QApplication::translate("PlacementPage", "Done", Q_NULLPTR));
        backButtonStartScreen->setText(QApplication::translate("PlacementPage", "Back", Q_NULLPTR));
        ChooseDirectionLabel->setText(QApplication::translate("PlacementPage", "Choose Direction:", Q_NULLPTR));
        directionDescriptionLabel->setText(QApplication::translate("PlacementPage", "If not selected, Vertical is assumed", Q_NULLPTR));
        shipTitleLabel->setText(QApplication::translate("PlacementPage", "Ships:", Q_NULLPTR));
        placeShipLabel->setText(QApplication::translate("PlacementPage", "Ship Placement", Q_NULLPTR));
        directionCB->setText(QApplication::translate("PlacementPage", "Horizontal", Q_NULLPTR));
        indicatorTitleLabel->setText(QApplication::translate("PlacementPage", "Turn Indicator", Q_NULLPTR));
        indicatorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PlacementPage: public Ui_PlacementPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACEMENTPAGE_H
