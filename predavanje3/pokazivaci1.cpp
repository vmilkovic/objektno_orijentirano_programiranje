#include <iostream>

using std::cout;

void prikazVrijednosti(int *pokazivac){
    //pokazivac je adresa varijable na koju pokazuje
    // *pokazivac je vrijednost varijable na koju pokazuje
    cout << *pokazivac;
}

int main(){
    int varijabla;
    int *broj {nullptr}; // nulptr pokazuje na adresu 0 zato jer inicijalizirani pokazivač mora pokazivati na neku adresu a ako pokazuje na 0 onda kažemo da ne pokazuje na ništa (null pokazivači)
    varijabla = 50;
    prikazVrijednosti(&varijabla);
}