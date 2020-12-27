/********************************************************************************
** Form generated from reading UI file 'playerboardpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERBOARDPAGE_H
#define UI_PLAYERBOARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerBoardPage
{
public:
    QPushButton *continueButton;
    QLabel *yourBoardTitle;
    QFrame *boardFrame;
    QWidget *gridLayoutWidget_2;
    QGridLayout *boardGrid;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *PlayerBoardPage)
    {
        if (PlayerBoardPage->objectName().isEmpty())
            PlayerBoardPage->setObjectName(QStringLiteral("PlayerBoardPage"));
        PlayerBoardPage->resize(800, 600);
        PlayerBoardPage->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        continueButton = new QPushButton(PlayerBoardPage);
        continueButton->setObjectName(QStringLiteral("continueButton"));
        continueButton->setGeometry(QRect(560, 530, 191, 41));
        continueButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        yourBoardTitle = new QLabel(PlayerBoardPage);
        yourBoardTitle->setObjectName(QStringLiteral("yourBoardTitle"));
        yourBoardTitle->setGeometry(QRect(110, 20, 311, 41));
        yourBoardTitle->setStyleSheet(QLatin1String("font: 75 22pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;\n"
"color: rgb(255, 255, 255);"));
        yourBoardTitle->setAlignment(Qt::AlignCenter);
        boardFrame = new QFrame(PlayerBoardPage);
        boardFrame->setObjectName(QStringLiteral("boardFrame"));
        boardFrame->setGeometry(QRect(20, 80, 500, 500));
        boardFrame->setFrameShape(QFrame::StyledPanel);
        boardFrame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_2 = new QWidget(boardFrame);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 491, 491));
        boardGrid = new QGridLayout(gridLayoutWidget_2);
        boardGrid->setSpacing(0);
        boardGrid->setObjectName(QStringLiteral("boardGrid"));
        boardGrid->setSizeConstraint(QLayout::SetMaximumSize);
        boardGrid->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(PlayerBoardPage);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(520, 440, 256, 71));
        textBrowser->setStyleSheet(QStringLiteral(""));

        retranslateUi(PlayerBoardPage);

        QMetaObject::connectSlotsByName(PlayerBoardPage);
    } // setupUi

    void retranslateUi(QWidget *PlayerBoardPage)
    {
        PlayerBoardPage->setWindowTitle(QApplication::translate("PlayerBoardPage", "Form", Q_NULLPTR));
        continueButton->setText(QApplication::translate("PlayerBoardPage", "Continue", Q_NULLPTR));
        yourBoardTitle->setText(QApplication::translate("PlayerBoardPage", "Your Board's Status", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("PlayerBoardPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:18pt; color:#ffffff;\">Press Continue to execute your next shot</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PlayerBoardPage: public Ui_PlayerBoardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERBOARDPAGE_H
