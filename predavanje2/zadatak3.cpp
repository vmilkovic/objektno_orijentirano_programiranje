// Što će se ispisati?

#include <iostream>

using std::cout;
using std::endl;

int main(){
    int i = 1;
    int j = 10;
    int *p = &j;
    *p *= *p;
    i = i + j;
    p = &i;
    cout << i << endl << j << endl << *p <<endl;
}
