#ifndef FLYWEIGHTTEST_H
#define FLYWEIGHTTEST_H

#include <QObject>
#include <QTest>

#include <Flyweight.h>

class FlyWeightTest : public QObject
{
    Q_OBJECT
public:
    explicit FlyWeightTest(QObject *parent = nullptr){
        (void) parent;
    }

private slots:
    void test_sentense() {
        Sentence sentence("hello world");
        sentence[1].capitalize = true;
        cout << sentence.str()<<endl; // prints "hello WORLD"
        QVERIFY(sentence.str() == "hello WORLD");
    }

    void test_sentense_2() {
        Sentence sentence("hello world ");
        sentence[1].capitalize = true;
        cout << sentence.str()<<endl; // prints "hello WORLD"
        QVERIFY(sentence.str() == "hello WORLD ");
    }

    void test_sentense_3() {
        Sentence sentence(" hello world");
        sentence[1].capitalize = true;
        cout << sentence.str() <<endl; // prints "hello WORLD"
        QVERIFY(sentence.str() == " hello WORLD");
    }

//    void test_sentense_4() {
//        Sentence sentence("hello   world");
//        sentence[1].capitalize = true;
//        cout << sentence.str() <<endl; // prints "hello WORLD"
//        QVERIFY(sentence.str() == "hello   WORLD");
//    }

};

#endif // FLYWEIGHTTEST_H
