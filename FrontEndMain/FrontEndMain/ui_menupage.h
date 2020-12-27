/********************************************************************************
** Form generated from reading UI file 'menupage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPAGE_H
#define UI_MENUPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuPage
{
public:
    QPushButton *optionsButton;
    QPushButton *StartGameButton;
    QPushButton *helpButton;
    QFrame *LogoFrameNew;

    void setupUi(QWidget *MenuPage)
    {
        if (MenuPage->objectName().isEmpty())
            MenuPage->setObjectName(QStringLiteral("MenuPage"));
        MenuPage->resize(800, 600);
        MenuPage->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        optionsButton = new QPushButton(MenuPage);
        optionsButton->setObjectName(QStringLiteral("optionsButton"));
        optionsButton->setGeometry(QRect(270, 460, 261, 41));
        optionsButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        StartGameButton = new QPushButton(MenuPage);
        StartGameButton->setObjectName(QStringLiteral("StartGameButton"));
        StartGameButton->setGeometry(QRect(270, 400, 261, 41));
        StartGameButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 75 18pt \"MS Shell Dlg 2\";\n"
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
        helpButton = new QPushButton(MenuPage);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setGeometry(QRect(270, 520, 261, 41));
        helpButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        LogoFrameNew = new QFrame(MenuPage);
        LogoFrameNew->setObjectName(QStringLiteral("LogoFrameNew"));
        LogoFrameNew->setGeometry(QRect(120, -30, 581, 411));
        LogoFrameNew->setStyleSheet(QLatin1String("image: url(:/BattleShipLogo.svg);\n"
"background-color: rgb(0, 0, 0);"));
        LogoFrameNew->setFrameShape(QFrame::StyledPanel);
        LogoFrameNew->setFrameShadow(QFrame::Raised);

        retranslateUi(MenuPage);

        QMetaObject::connectSlotsByName(MenuPage);
    } // setupUi

    void retranslateUi(QWidget *MenuPage)
    {
        MenuPage->setWindowTitle(QApplication::translate("MenuPage", "Form", Q_NULLPTR));
        optionsButton->setText(QApplication::translate("MenuPage", "Options", Q_NULLPTR));
        StartGameButton->setText(QApplication::translate("MenuPage", "Start Game", Q_NULLPTR));
        helpButton->setText(QApplication::translate("MenuPage", " Help | Rules", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MenuPage: public Ui_MenuPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPAGE_H
