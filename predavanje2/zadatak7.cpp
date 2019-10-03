// Što je izlaz sljedećeg programa:
#include <iostream>

using std::cout;
int main()
{
    //int a = 10, *pa, &ra; // mora se inicijalizirat &ra ili javlja grešku
    int a = 10, *pa, &ra = a; // inicijaliziran &ra

    pa = &a;
    ra = a;

    cout << "a=" << ra;
    return 0;

    // Rezultat je: Compiler Error - 'ra' declared as reference but not initialized
    // Zato jer &ra nije odmah inicijalizirano već je NULL iako se kasnije inicijaliziran kao a?
}