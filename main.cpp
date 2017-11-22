#include <iostream>

#include <AbstactFactory.h>
#include <FactoryMethod.h>
#include <FactoryMethodClassic.h>
#include <virtual.h>
#include <factorial.h>
#include <limits>
#include <Strategy.h>
#include <RLValues.h>

using namespace std;


int main()
{

    abstract_facroty_test();
    facroty_method_test();
    facroty_method_classic_test();


    virtual_test();

    cout << "INT32_MAX " << INT32_MAX <<endl;
    for (int i = 10; i < 30; ++i) {
        if (!factorial(i)) {
            break;
        }
    }

    strategy_test();

    test_rv_Values();

    return 0;
}

