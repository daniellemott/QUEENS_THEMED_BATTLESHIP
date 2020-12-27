#include "shiptest.h"

// -- setup/cleanup --
void TestQString::toUpper()
{
    QString str = "Hello";
    QCOMPARE(str.toUpper(), QString("HELLO"));
}

// generate basic main: no GUI, no events
//QTEST_APPLESS_MAIN(TestQString)

// uncomment next line if class declaration is in .cpp (no .h)
//#include "TestCalculator.moc"
