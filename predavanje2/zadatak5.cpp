// Što je izlaz sljedećeg programa:

#include <iostream>

using std::cout;
using std::endl;

int main(){
    int a = 32, *ptr = &a;
    char ch = 'A', &cho = ch;

    cho += a;
    *ptr += ch;
    cout << a << ", " << ch << endl;
}