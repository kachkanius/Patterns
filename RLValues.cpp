#include "RLValues.h"

#include <vector>

#include <iostream>
using namespace std;

void f(int& i) { std::cout << "lvalue ref: " << i << "\n"; }
void f(int&& i) { std::cout << "rvalue ref: " << i << "\n"; }


int getValue ()
{
    int ii = 10;
    return ii;
}



void printReference (int& value)
{
        cout << "lvalue: value = " << value << endl;
}

void printReference (int&& value)
{
        cout << "rvalue: value = " << value << endl;
}

int getValue99 ()
{
    int temp_ii = 99;
    return temp_ii;
}




void test_rv_Values()
{
        cout<<endl<<endl << __func__ <<endl;

    int i = 77;
        f(i);    // lvalue ref called
        f(99);   // rvalue ref called

        f(std::move(i));  // rvalue ref called


        cout << getValue() <<endl;

        const int& val = getValue(); // OK
        cout << val <<endl;
        int&& val2 = getValue(); // NOT OK
        cout << val2 <<endl;



        int ii = 11;
        printReference(ii);
        printReference(getValue99());  //  printReference(99);



cout <<endl<<endl;




        // Create a vector object and add a few elements to it.
        std::vector<A> v;
        A aa(1);
        v.push_back(std::move(aa));
        v.push_back(A(75));

        // Insert a new element into the second position of the vector.
        v.insert(v.begin() + 1, A(50));


        cout << endl <<endl;

        A a(11), b(22);
         cout << a.Length() << ' ' << b.Length() << endl;
         cout << a.get_mData() << ' ' << b.get_mData() << endl;
         swap(a,b);
         cout << a.Length() << ' ' << b.Length() << endl;
         cout << a.get_mData() << ' ' << b.get_mData() << endl;

}
