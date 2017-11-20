#include "AbstactFactory.h"
void abstract_facroty_test() {
    LinuxViewFactry linuxFactory;
    AndroidViewFactry androidFactory;


    View* lpv = linuxFactory.createPatternView();
    View* apv = androidFactory.createPatternView();

    lpv->info();
     apv->info();
}
