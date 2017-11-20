#include "FactoryMethod.h"
#include <vector>
using namespace factorymethod;


View* View::createView(View_Type type) {
   View * p;
   switch (type)
   {
       case PinPad:
           p = new PinPadView();
           break;
       case Pattern:
           p = new PatternView();
           break;
       default:
           assert( false);
   }
   return p;
}

void facroty_method_test() {
    cout<<endl<<endl << __func__ <<endl;
    vector<View*> views;
      views.push_back( View::createView(View::PinPad));
      views.push_back( View::createView(View::Pattern));

      for (auto v:views)
          v->info();
}
