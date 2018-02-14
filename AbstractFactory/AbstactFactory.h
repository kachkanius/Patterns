#ifndef ABSTACTFACTORY_H
#define ABSTACTFACTORY_H
#include <iostream>
using namespace std;

void abstract_facroty_test();

namespace abstractfactory {


class View {
public:
    virtual void info() = 0;
};

class PinPadView : public View{
public:
    virtual void info () = 0;
     PinPadView() {cout << " I'm PinPadView()" <<endl;}
    virtual ~PinPadView() {cout << "~PinPadView()" <<endl;}
};

class PatternView : public View {
public:
    virtual void info () = 0;
    PatternView() {cout << " I'm PatternView()" <<endl;}
    virtual ~PatternView() {cout << "~PatternView()" <<endl;}
};


class AndroidPinpad : public PinPadView {
public:
    void info(){ cout << " I'm Android PinPad View" <<endl;}
    AndroidPinpad() {cout << "AndroidPinpad()" <<endl;}
    ~AndroidPinpad(){cout << "~AndroidPinPad()" <<endl;}
};


class AndroidPattern : public PatternView {
public:
    void info(){ cout << " I'm Android Pattern View" <<endl;}
    AndroidPattern() {cout << "AndroidPattern()" <<endl;}
    ~AndroidPattern(){cout << "~AndroidPattern()" <<endl;}
};


class LinuxPinpad : public PinPadView {
public:
    void info(){ cout << "Linux PinPad View" <<endl;}
   LinuxPinpad(){cout << "LinuxPinpad()" <<endl;}
    ~LinuxPinpad(){cout << "~LinuxPinpad()" <<endl;}
};


class LinuxPattern : public PatternView {
public:
    void info(){ cout << "Linux Pattern View" <<endl;}
    ~LinuxPattern(){cout << "~LinuxPattern()" <<endl;}
        LinuxPattern(){cout << "LinuxPattern()" <<endl;}
};


class ViewsFactory
{
public:
    virtual PinPadView* createPinPadView() = 0;
    virtual PatternView* createPatternView() = 0;

    virtual ~ViewsFactory() {cout << "~ViewsFactory()" <<endl;}
        ViewsFactory() {cout << "ViewsFactory()" <<endl;}
};

class AndroidViewFactry : public ViewsFactory{
public:
    PinPadView* createPinPadView() {return new AndroidPinpad();}
    PatternView* createPatternView(){return new AndroidPattern();}
    virtual ~AndroidViewFactry() {cout << "~AndroidViewFactry()" <<endl;}
        AndroidViewFactry() {cout << "AndroidViewFactry()" <<endl;}
};

class LinuxViewFactry : public ViewsFactory{
public:
    PinPadView* createPinPadView() {return new LinuxPinpad();}
    PatternView* createPatternView(){return new LinuxPattern();}
     virtual ~LinuxViewFactry() {cout << "~LinuxViewFactry()" <<endl;}
         LinuxViewFactry() {cout << "LinuxViewFactry()" <<endl;}
};

} // namespace abstractfactory


#endif // ABSTACTFACTORY_H
