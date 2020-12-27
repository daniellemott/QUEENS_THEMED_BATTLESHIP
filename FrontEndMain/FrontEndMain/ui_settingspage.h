/********************************************************************************
** Form generated from reading UI file 'settingspage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSPAGE_H
#define UI_SETTINGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settingspage
{
public:
    QFrame *frame;
    QPushButton *backButtonOptions;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *BoardSize;
    QSlider *sizeSlider;
    QLabel *sizeValue;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *customName;
    QSpinBox *customLength;
    QSpinBox *customWidth;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addBike;
    QPushButton *addCar;
    QPushButton *addBus;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *singlePlayerCB;
    QSpacerItem *horizontalSpacer;
    QLabel *easyDifficulty;
    QSlider *difficultySlider;
    QLabel *hardDifficulty;
    QListWidget *shipList;
    QPushButton *deleteCustomShip;
    QPushButton *addCustomShip;
    QLabel *label_2;

    void setupUi(QWidget *settingspage)
    {
        if (settingspage->objectName().isEmpty())
            settingspage->setObjectName(QStringLiteral("settingspage"));
        settingspage->resize(800, 600);
        frame = new QFrame(settingspage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(430, 20, 371, 221));
        frame->setStyleSheet(QStringLiteral("image: url(:/BattleShipLogo.svg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        backButtonOptions = new QPushButton(settingspage);
        backButtonOptions->setObjectName(QStringLiteral("backButtonOptions"));
        backButtonOptions->setGeometry(QRect(480, 530, 281, 41));
        backButtonOptions->setStyleSheet(QLatin1String("QPushButton {\n"
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
        verticalLayoutWidget = new QWidget(settingspage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, 19, 431, 521));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 28pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        BoardSize = new QLabel(verticalLayoutWidget);
        BoardSize->setObjectName(QStringLiteral("BoardSize"));
        BoardSize->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(BoardSize);

        sizeSlider = new QSlider(verticalLayoutWidget);
        sizeSlider->setObjectName(QStringLiteral("sizeSlider"));
        sizeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sizeSlider);

        sizeValue = new QLabel(verticalLayoutWidget);
        sizeValue->setObjectName(QStringLiteral("sizeValue"));
        sizeValue->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(sizeValue);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(label);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        customName = new QLineEdit(verticalLayoutWidget);
        customName->setObjectName(QStringLiteral("customName"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customName->sizePolicy().hasHeightForWidth());
        customName->setSizePolicy(sizePolicy);
        customName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255)"));
        customName->setMaxLength(10);

        horizontalLayout_6->addWidget(customName);

        customLength = new QSpinBox(verticalLayoutWidget);
        customLength->setObjectName(QStringLiteral("customLength"));
        customLength->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));
        customLength->setMinimum(1);

        horizontalLayout_6->addWidget(customLength);

        customWidth = new QSpinBox(verticalLayoutWidget);
        customWidth->setObjectName(QStringLiteral("customWidth"));
        customWidth->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));
        customWidth->setMinimum(1);

        horizontalLayout_6->addWidget(customWidth);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addBike = new QPushButton(verticalLayoutWidget);
        addBike->setObjectName(QStringLiteral("addBike"));
        addBike->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout_2->addWidget(addBike);

        addCar = new QPushButton(verticalLayoutWidget);
        addCar->setObjectName(QStringLiteral("addCar"));
        addCar->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout_2->addWidget(addCar);

        addBus = new QPushButton(verticalLayoutWidget);
        addBus->setObjectName(QStringLiteral("addBus"));
        addBus->setStyleSheet(QLatin1String("QPushButton {\n"
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

        horizontalLayout_2->addWidget(addBus);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        singlePlayerCB = new QCheckBox(verticalLayoutWidget);
        singlePlayerCB->setObjectName(QStringLiteral("singlePlayerCB"));
        singlePlayerCB->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));

        horizontalLayout_3->addWidget(singlePlayerCB);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        easyDifficulty = new QLabel(verticalLayoutWidget);
        easyDifficulty->setObjectName(QStringLiteral("easyDifficulty"));
        easyDifficulty->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));

        horizontalLayout_3->addWidget(easyDifficulty);

        difficultySlider = new QSlider(verticalLayoutWidget);
        difficultySlider->setObjectName(QStringLiteral("difficultySlider"));
        difficultySlider->setMaximum(3);
        difficultySlider->setPageStep(1);
        difficultySlider->setOrientation(Qt::Horizontal);
        difficultySlider->setTickInterval(0);

        horizontalLayout_3->addWidget(difficultySlider);

        hardDifficulty = new QLabel(verticalLayoutWidget);
        hardDifficulty->setObjectName(QStringLiteral("hardDifficulty"));
        hardDifficulty->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));

        horizontalLayout_3->addWidget(hardDifficulty);


        verticalLayout->addLayout(horizontalLayout_3);

        shipList = new QListWidget(settingspage);
        shipList->setObjectName(QStringLiteral("shipList"));
        shipList->setGeometry(QRect(450, 270, 331, 201));
        shipList->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \"MS Shell Dlg 2\";"));
        deleteCustomShip = new QPushButton(settingspage);
        deleteCustomShip->setObjectName(QStringLiteral("deleteCustomShip"));
        deleteCustomShip->setGeometry(QRect(620, 480, 141, 41));
        deleteCustomShip->setStyleSheet(QLatin1String("QPushButton {\n"
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
        addCustomShip = new QPushButton(settingspage);
        addCustomShip->setObjectName(QStringLiteral("addCustomShip"));
        addCustomShip->setGeometry(QRect(480, 480, 121, 41));
        addCustomShip->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label_2 = new QLabel(settingspage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(570, 240, 81, 21));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"MS Shell Dlg 2\";\n"
"text-decoration: underline;"));

        retranslateUi(settingspage);

        QMetaObject::connectSlotsByName(settingspage);
    } // setupUi

    void retranslateUi(QWidget *settingspage)
    {
        settingspage->setWindowTitle(QApplication::translate("settingspage", "Form", Q_NULLPTR));
        backButtonOptions->setText(QApplication::translate("settingspage", "Back", Q_NULLPTR));
        label_5->setText(QApplication::translate("settingspage", "OPTIONS", Q_NULLPTR));
        BoardSize->setText(QApplication::translate("settingspage", "Board Size", Q_NULLPTR));
        sizeValue->setText(QApplication::translate("settingspage", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("settingspage", "Build Custom Ship", Q_NULLPTR));
        customName->setInputMask(QString());
        customName->setText(QApplication::translate("settingspage", "Name", Q_NULLPTR));
        addBike->setText(QApplication::translate("settingspage", "Add Bike", Q_NULLPTR));
        addCar->setText(QApplication::translate("settingspage", "Add Car", Q_NULLPTR));
        addBus->setText(QApplication::translate("settingspage", "Add Bus", Q_NULLPTR));
        singlePlayerCB->setText(QApplication::translate("settingspage", "Single Player Mode", Q_NULLPTR));
        easyDifficulty->setText(QApplication::translate("settingspage", "Easy", Q_NULLPTR));
        hardDifficulty->setText(QApplication::translate("settingspage", "Hard", Q_NULLPTR));
        deleteCustomShip->setText(QApplication::translate("settingspage", "Delete Ship", Q_NULLPTR));
        addCustomShip->setText(QApplication::translate("settingspage", "Add Ship", Q_NULLPTR));
        label_2->setText(QApplication::translate("settingspage", "Ship List", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settingspage: public Ui_settingspage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSPAGE_H
