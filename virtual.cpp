#include "virtual.h"

#include <iostream>
using namespace std;
//Base::Base()
//{
//cout << "Base()" <<endl;
//}


void virtual_test()
{
    cout<<endl<<endl << __func__ <<endl;
    cout << "sizeof(Base)= "<< sizeof(Base) <<endl;
    cout << "sizeof(BB)= "<< sizeof(BB) <<endl;

    Base* b = new BB();



}

void BB::func()
{

}

void BB::func2()
{

}
