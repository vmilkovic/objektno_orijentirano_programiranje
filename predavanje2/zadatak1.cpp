// Napišite funkciju ispis koje ispisuje int te float tip podataka na standardni izlaz
// (preklapanje funkcija za različiti tip podataka)

#include <iostream>

using std::cout;
using std::endl;

void ispis(int broj){
    cout << broj << endl;
}

void ispis(float broj){
    cout << broj << endl;
}

int main(){
    /* int integerBroj = 44;
    float floatBroj = 4.44;
    ispis(integerBroj);
    ispis(floatBroj); */
    ispis(10);
    ispis(10.2f);
}