#include <iostream>

using std::cout;

//definiramo refencu na int
void postaviIPrikazi(int &varijabla){
    varijabla = 3;
    cout << varijabla;
}

// definiramo referencu na konstantu int
void prikazi(const int &varijabla){
    cout << varijabla;
    // varijabla = 3;
    // nije moguce promijeniti vrijednost
    // ako je referenca na konstantu
}

int main(){
    int broj = 5;
    prikazi(broj);
    postaviIPrikazi(broj);
}