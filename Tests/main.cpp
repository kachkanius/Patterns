#include <QApplication>
#include <QTest>

#include <singletontest.h>

using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTest::qExec(new SingleToneTest, argc, argv);

    return 0;
}
