#include <iostream>
using namespace std;

long factorial(int digit)
{
    long factor = 1;
long tmp = 1;
    for(int i=1; i <= digit; i++)
    {
        tmp = factor * i;
        if (factor != 0 && (tmp / factor) != i)
        {
            cout << "Owerflow!!!! at i= "<<i <<endl;
            return 0;
        }
        factor = tmp;
    }



    cout << "Faktorial chisla "<< digit << " raven " << factor << endl;
    return factor;
}

int factorial2(int digit) {
    if (digit == 0) return 1;
    if (digit < 0) return 0;

    return(digit * factorial2(digit -1));
}
