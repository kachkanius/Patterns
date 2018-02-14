#include "Strategy.h"
using namespace strategy;
void strategy_test()
{
    cout<<endl<<endl << __func__ <<endl;
    SecureView* v = new SecureView(new PinPadView());
    v->draw();
    delete v;

}
