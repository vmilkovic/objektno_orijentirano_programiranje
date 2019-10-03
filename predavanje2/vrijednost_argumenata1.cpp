#include <iostream>

using std::cout;
using std::endl;

void prikazi(int a = 5){
    cout << a << endl;
}

void prikaziDvaBroja(int a = 5, int b = 6){
    cout << a << endl;
    cout << b << endl;
}

int main(){
    prikazi();
    prikazi(6);
    prikaziDvaBroja();
    prikaziDvaBroja(12);
    prikaziDvaBroja(12, 13);
}