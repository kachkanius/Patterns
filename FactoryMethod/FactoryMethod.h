#ifndef FACTORYMETHOD_H
#define FACTORYMETHOD_H
#include <iostream>
#include <assert.h>

using namespace std;

void facroty_method_test();

namespace factorymethod {

class View {
public:
    enum View_Type { PinPad=0, Pattern};
    virtual void info() = 0;
    // Параметризированный статический фабричный метод
    static View* createView( View_Type type );
};

class PinPadView : public View{
public:
    void info(){ cout << " I'm PinPad View" <<endl;}
     PinPadView() {cout << "PinPadView()" <<endl;}
    virtual ~PinPadView() {cout << "~PinPadView()" <<endl;}
};

class PatternView : public View {
public:
    void info(){ cout << " I'm Pattern View" <<endl;}
    PatternView() {cout << "PatternView()" <<endl;}
    virtual ~PatternView() {cout << "~PatternView()" <<endl;}
};


}
#endif // FACTORYMETHOD_H
