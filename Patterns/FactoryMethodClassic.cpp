#include "FactoryMethodClassic.h"
#include <vector>
#include <memory>
using namespace factorymethodclassic;
int View::refCount = 0;

void facroty_method_classic_test() {
    cout<<endl<<endl << __func__ <<endl;
    PinPadViewFactory ppfactory;
    PatternViewFactory pfactory;

    vector<shared_ptr<View>> views;
    views.push_back( shared_ptr<View>(ppfactory.create()));
    views.push_back( shared_ptr<View>(ppfactory.create()));
    views.push_back(shared_ptr<View>( pfactory.create()));
    views.push_back(shared_ptr<View>( pfactory.create()));

    for (auto v:views)
    {v->info();
        //delete v;
    }
    views.clear();

}
