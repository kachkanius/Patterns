#ifndef BRIDGETEST_H
#define BRIDGETEST_H

#include <QObject>
#include <Bridge.h>

class BridgeTest : public QObject
{
    Q_OBJECT
public:
    explicit BridgeTest(QObject *parent = nullptr){
        (void) parent;
    }

private slots:
    void test_success() {

    }
};


#endif // BRIDGETEST_H
