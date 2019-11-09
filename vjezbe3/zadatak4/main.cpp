// Implementirajte klasu u zasebnim datotekama zaglavlja i implementacije.
// U glavnoj datoteci includajte vašu datoteku i prikažite korištenje klase i pripadnih metoda.

#include <iostream>
#include "KompleksniBroj.hpp"

int main(){
    KompleksniBroj broj1;
    broj1.setRealni(3);
    broj1.setImaginarni(3);

    std::cout << broj1.izracunajApsolutnuVrijednost();
    std::cout << broj1.getRealni() << std::endl;
    broj1.prikazi() ;

    KompleksniBroj broj2;
    broj2.setRealni(4);
    broj2.setImaginarni(4);
    broj2.zbrojiKompleksniBroj(broj1);
    std::cout << broj2.getRealni() << std::endl;
    std::cout << broj2.getImaginarni() << std::endl;
}