#include <iostream>

#define kvadrat(x) x*x

using std::cout;

int main(){
    int broj1 = 2;
    int broj2 = 3;

    cout << kvadrat(broj1 + broj2);
    // preprosesor ce zamijeniti ovu liniju u:
    // cout << broj1+broj2*broj1+broj2
    // cout << 2+3*2+3
}