#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
using namespace std;
void strategy_test();

namespace strategy {

class View {
public:
    virtual void show() = 0;
    virtual ~View() {cout<<__func__ <<endl;}
};

class PinPadView : public View{
public:
    void show () {cout << " I'm PinPadView()" <<endl;}

     PinPadView() {cout<<__func__ <<endl;}
    ~PinPadView() {cout<<__func__ <<endl;}
};

class PatternView : public View {
public:
    void show () {cout << " I'm PatternView()" <<endl;}
    PatternView() {cout<<__func__ <<endl;}
    ~PatternView() {cout<<__func__ <<endl;}
};


class SecureView
{
public:
    SecureView(View* view) : v(view){cout<<__func__ <<endl;}
    ~SecureView() {cout<<__func__ <<endl; delete v;}
    void draw(){
        if (v) {
            v->show();
        }
    }
private:
    View* v;
};

}
#endif // STRATEGY_H
