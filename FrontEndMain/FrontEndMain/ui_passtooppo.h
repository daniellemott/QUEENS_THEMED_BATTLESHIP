/********************************************************************************
** Form generated from reading UI file 'passtooppo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSTOOPPO_H
#define UI_PASSTOOPPO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PassToOppo
{
public:
    QFrame *PassWindowFrame;
    QPushButton *passWindowOkayButton;

    void setupUi(QWidget *PassToOppo)
    {
        if (PassToOppo->objectName().isEmpty())
            PassToOppo->setObjectName(QStringLiteral("PassToOppo"));
        PassToOppo->resize(800, 600);
        PassWindowFrame = new QFrame(PassToOppo);
        PassWindowFrame->setObjectName(QStringLiteral("PassWindowFrame"));
        PassWindowFrame->setGeometry(QRect(0, 0, 800, 600));
        PassWindowFrame->setStyleSheet(QLatin1String("QFrame{image: url(:/passWindow.png);\n"
"background-color: rgb(0, 0, 0);}"));
        PassWindowFrame->setFrameShape(QFrame::StyledPanel);
        PassWindowFrame->setFrameShadow(QFrame::Raised);
        passWindowOkayButton = new QPushButton(PassWindowFrame);
        passWindowOkayButton->setObjectName(QStringLiteral("passWindowOkayButton"));
        passWindowOkayButton->setGeometry(QRect(500, 490, 231, 61));
        passWindowOkayButton->setAutoFillBackground(false);
        passWindowOkayButton->setStyleSheet(QLatin1String("QPushButton {\n"
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

        retranslateUi(PassToOppo);

        QMetaObject::connectSlotsByName(PassToOppo);
    } // setupUi

    void retranslateUi(QWidget *PassToOppo)
    {
        PassToOppo->setWindowTitle(QApplication::translate("PassToOppo", "Form", Q_NULLPTR));
        passWindowOkayButton->setText(QApplication::translate("PassToOppo", "Okay", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PassToOppo: public Ui_PassToOppo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSTOOPPO_H
