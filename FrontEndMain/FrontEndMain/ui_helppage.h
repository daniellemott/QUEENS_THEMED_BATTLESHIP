/********************************************************************************
** Form generated from reading UI file 'helppage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPPAGE_H
#define UI_HELPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpPage
{
public:
    QTextBrowser *gameplayOutline;
    QLabel *GamePlayLabel;
    QLabel *RuleTitleLabel;
    QLabel *ShipDimensionsLabel;
    QTextBrowser *textBrowser_2;
    QLabel *helpTitle;
    QPushButton *backButtonHelp;
    QLabel *oneRuleLabel;

    void setupUi(QWidget *HelpPage)
    {
        if (HelpPage->objectName().isEmpty())
            HelpPage->setObjectName(QStringLiteral("HelpPage"));
        HelpPage->resize(800, 600);
        HelpPage->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        gameplayOutline = new QTextBrowser(HelpPage);
        gameplayOutline->setObjectName(QStringLiteral("gameplayOutline"));
        gameplayOutline->setGeometry(QRect(50, 110, 681, 191));
        QFont font;
        font.setPointSize(12);
        gameplayOutline->setFont(font);
        gameplayOutline->setStyleSheet(QLatin1String("QTextBrowser{\n"
"	border: 0px solid black;\n"
"	color: rgb(255, 255, 255);\n"
"};\n"
""));
        GamePlayLabel = new QLabel(HelpPage);
        GamePlayLabel->setObjectName(QStringLiteral("GamePlayLabel"));
        GamePlayLabel->setGeometry(QRect(50, 60, 131, 51));
        GamePlayLabel->setStyleSheet(QLatin1String("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        RuleTitleLabel = new QLabel(HelpPage);
        RuleTitleLabel->setObjectName(QStringLiteral("RuleTitleLabel"));
        RuleTitleLabel->setGeometry(QRect(40, 440, 141, 51));
        RuleTitleLabel->setStyleSheet(QLatin1String("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        ShipDimensionsLabel = new QLabel(HelpPage);
        ShipDimensionsLabel->setObjectName(QStringLiteral("ShipDimensionsLabel"));
        ShipDimensionsLabel->setGeometry(QRect(40, 320, 221, 31));
        ShipDimensionsLabel->setStyleSheet(QLatin1String("font: 22pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        textBrowser_2 = new QTextBrowser(HelpPage);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(40, 350, 281, 81));
        textBrowser_2->setStyleSheet(QLatin1String("QTextBrowser{\n"
"	border: 0px solid black;\n"
"	color: rgb(255, 255, 255);\n"
"};\n"
""));
        helpTitle = new QLabel(HelpPage);
        helpTitle->setObjectName(QStringLiteral("helpTitle"));
        helpTitle->setGeometry(QRect(310, 20, 171, 41));
        helpTitle->setStyleSheet(QLatin1String("font: 75 26pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));
        helpTitle->setAlignment(Qt::AlignCenter);
        backButtonHelp = new QPushButton(HelpPage);
        backButtonHelp->setObjectName(QStringLiteral("backButtonHelp"));
        backButtonHelp->setGeometry(QRect(570, 520, 191, 41));
        backButtonHelp->setStyleSheet(QLatin1String("QPushButton {\n"
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
        oneRuleLabel = new QLabel(HelpPage);
        oneRuleLabel->setObjectName(QStringLiteral("oneRuleLabel"));
        oneRuleLabel->setGeometry(QRect(50, 490, 511, 51));
        oneRuleLabel->setStyleSheet(QLatin1String("font: 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"text-decoration: underline;"));

        retranslateUi(HelpPage);

        QMetaObject::connectSlotsByName(HelpPage);
    } // setupUi

    void retranslateUi(QWidget *HelpPage)
    {
        HelpPage->setWindowTitle(QApplication::translate("HelpPage", "Form", Q_NULLPTR));
        gameplayOutline->setHtml(QApplication::translate("HelpPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-  Player's will begin by placing ship's on their own game boards</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-  Once placed, the positions the ships will be hidden from your opponent</"
                        "span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-  You and your opponent(s) will take turns shooting at each other's grids</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-  If a piece of the ship is uncovered the shot was successful, if the tile turns black you missed</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; "
                        "margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">-  A player wins if he/she removes all ships from the opponent's grid</span></p></body></html>", Q_NULLPTR));
        GamePlayLabel->setText(QApplication::translate("HelpPage", "Gameplay", Q_NULLPTR));
        RuleTitleLabel->setText(QApplication::translate("HelpPage", "ONE RULE", Q_NULLPTR));
        ShipDimensionsLabel->setText(QApplication::translate("HelpPage", "Ship Dimensions", Q_NULLPTR));
        textBrowser_2->setHtml(QApplication::translate("HelpPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">Bus:  Height = 3, Width = 2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">Car:  Height = 3, Width = 1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:14pt;\">Bike: Height = 2, Width = 1</span></p></bod"
                        "y></html>", Q_NULLPTR));
        helpTitle->setText(QApplication::translate("HelpPage", "Help", Q_NULLPTR));
        backButtonHelp->setText(QApplication::translate("HelpPage", "Back", Q_NULLPTR));
        oneRuleLabel->setText(QApplication::translate("HelpPage", "A Player must NOT look at opponent's ship grid", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HelpPage: public Ui_HelpPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPPAGE_H
