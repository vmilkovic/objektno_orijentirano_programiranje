#include <iostream>

using std::cout;
using std::endl;

void square(int x){
    cout << "Integer funckija " << x * x << endl;
}

void square(float x){
    cout << "Float funkcija " << x * x << endl;
}

void square(double x){
    cout << "Double funkcija " << x * x << endl;
}

int main(){
    int x = 10;
    float y = 20.0;
    double z = 30.0;
    square(x);
    square(y);
    square(z);
}