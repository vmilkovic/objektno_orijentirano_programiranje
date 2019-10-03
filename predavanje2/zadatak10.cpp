// Što je izlaz sljdećeg programa:
#include <iostream>
using std::cout;

void square( int *x )
{
    *x = (*x)++ * (*x);
}

void square( int *x, int *y)
{
    *x = (*x) * --(*y);
}

int main(){
    int number = 30;
    // square(&number); // (30+1) * 30 = 930
    square(&number, &number); // 30 * (30-1) = 870
    cout << number;
    return 0;
}