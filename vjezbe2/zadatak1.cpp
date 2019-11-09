// Izradite funkciju zamijeni koja će zamijeniti vrijednosti dvije varijable.
// Funkciju uzradite na dva načina, pomoću pokazivača i pomoću referenci.
// Neka se funkcije zovu zamijeniP i zamijeniR

#include <iostream>

void zamijeniP( int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void zamijeniR( int &a, int &b ){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 2;
    int y = 4;
    std::cout << "x: " << x << ", y: " << y << std::endl;
    zamijeniP(&x, &y);
    std::cout << "x: " << x << ", y: " << y << std::endl;
    zamijeniR(x, y);
    std::cout << "x: " << x << ", y: " << y << std::endl;
}