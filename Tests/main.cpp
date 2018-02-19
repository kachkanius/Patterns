#include <QApplication>
#include <QTest>

#include <singletontest.h>
#include <statetest.h>

using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTest::qExec(new StateTest, argc, argv);

    return 0;
}
