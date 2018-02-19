#ifndef STATETEST_H
#define STATETEST_H
#include <QObject>
#include <QTest>
#include <state.h>

class StateTest : public QObject
{
    Q_OBJECT
public:
    explicit StateTest(QObject *parent = nullptr){
        (void) parent;
    }

private slots:
    void test_success() {
        CombinationLock cl({1,2,3});
        QVERIFY("LOCKED" == cl.status);
        cl.enter_digit(1);
        QVERIFY("1" == cl.status);
        cl.enter_digit(2);
        QVERIFY("12" == cl.status);
        cl.enter_digit(3);
        QVERIFY("OPEN" == cl.status);
    }
};

#endif // STATETEST_H
