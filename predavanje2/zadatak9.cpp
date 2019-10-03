// Što je izlaz sljedećeg programa:

#include <iostream>
using std::cout;

int fun( int x = 0, int y = 0, int z )
{ return (x + y + z); }

int main()
{
    cout << fun(10);
    return 0;
}

// Rezultat je: Compiler error - Ddefaul argument missing from parameter 3 of int fun