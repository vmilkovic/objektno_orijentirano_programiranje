#include <iostream>

using std::cout;

void prikaziIPostavi(int &varijabla){
    cout << varijabla;
    // prikazuje 5
    varijabla = 3;
}

int main(){
    int broj = 5;

    prikaziIPostavi(broj);

    cout << broj;
    // prikazuje 3
}