#ifndef PAGEPARSERTESTS_H
#define PAGEPARSERTESTS_H

#include <QObject>
#include <Singleton.h>

class SingleToneTest : public QObject
{
    Q_OBJECT
public:
    explicit SingleToneTest(QObject *parent = nullptr){
        (void) parent;
    }

private slots:
    void test_success() {
        Singleton::getInstance();
    }
};

#endif // PAGEPARSERTESTS_H
