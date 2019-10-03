#include <iostream>

using std::cout;
using std::endl;

/* void f1(int var1 = 1, int var2){
    cout << var1 << var2 << endl;
} */ // error - default argument missing from parameter 3

void f2(int var1, int var2 = 10, int var3 = 3){
    cout << var1 << var2 << var3 << endl;
}

/* void f3(int var1, int var2 = 10, int var3){
    cout << var1 << var2 << var3 << endl;
} */ // error - default argument missing for parameter 3

int main(){
    f2(2,2,2);
    f2(2,2);
    f2(2);
    //f2(); // error
}