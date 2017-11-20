#include "AbstactFactory.h"

using namespace abstractfactory;

void abstract_facroty_test() {
    cout<<endl<<endl << __func__ <<endl;
    LinuxViewFactry linuxFactory;
    AndroidViewFactry androidFactory;


    View* lpv = linuxFactory.createPatternView();
    View* apv = androidFactory.createPatternView();

    lpv->info();
     apv->info();
}
