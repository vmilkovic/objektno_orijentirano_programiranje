#include <iostream>

using std::cout;

void prikaziIPostavi(const int &varijabla){
    cout << varijabla;
    // prikazuje 5
    varijabla = 3; // greska
}

int main(){
    int broj = 5;
    prikaziIPostavi(broj);

    cout << broj;
    // prukazuje 5
}