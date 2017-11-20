#ifndef FACTORYMETHODCLASSIC_H
#define FACTORYMETHODCLASSIC_H
#include <iostream>
#include <assert.h>
#include <memory>

using namespace std;

void facroty_method_classic_test();

namespace factorymethodclassic {

class View {
public:
    virtual void info() = 0;
    virtual ~View(){}
    View() {
     ++refCount;
    }
protected:
    static int refCount;

    int myNum;
};


class PinPadView : public View {
public:
    void info(){ cout << " I'm PinPad View" <<endl;}
     PinPadView() {
         this->myNum = refCount;
         cout << "PinPadView("<< this->myNum <<")" <<endl;}
    virtual ~PinPadView() {cout << "~PinPadView("<< this->myNum <<")" <<endl;}
};

class PatternView : public View {
public:
    void info(){ cout << " I'm Pattern View" <<endl;}
    PatternView() {
        this->myNum = refCount;
        cout << "PatternView("<< this->myNum <<")" <<endl;
    }
    virtual ~PatternView() {cout << "~PatternView("<< this->myNum <<")" <<endl;}
};



class ViewFactory {
public:
    virtual View* create() = 0;
    ViewFactory() {cout << "ViewFactory()" <<endl;}
    virtual ~ViewFactory() {cout << "~ViewFactory()" <<endl;}
};

class PinPadViewFactory : public ViewFactory{
public:
    View* create(){ return (new PinPadView());}
     PinPadViewFactory() {cout << "PinPadViewFactory()" <<endl;}
    virtual ~PinPadViewFactory() {cout << "~PinPadViewFactory()" <<endl;}
};

class PatternViewFactory : public ViewFactory {
public:
      View* create(){ return ( new PatternView());}
    PatternViewFactory() {cout << "PatternViewFactory()" <<endl;}
    virtual ~PatternViewFactory() {cout << "~PatternViewFactory()" <<endl;}
};

}
#endif // FACTORYMETHOD_H
