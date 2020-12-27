#ifndef SHIPTEST_H
#define SHIPTEST_H

#include <QtTest>

//#include <QtTest/QtTest>

class TestQString: public QObject
{
    Q_OBJECT
private slots:
    void toUpper();
};


#endif // SHIPTEST_H
