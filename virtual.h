#ifndef VIRTUAL_H
#define VIRTUAL_H


void virtual_test();

class Base
{
public:
   // virtual void func() = 0;
   // virtual void func2() = 0;
private:

    int i;
    int ii;
    char ch5[5];
    char ch4[3];
};

class BB : public Base {
public:
void func();
void func2();
};

#endif // VIRTUAL_H
