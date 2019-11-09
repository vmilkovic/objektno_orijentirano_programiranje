// Prošlu strukturu i funkcije implementirajte u zasebnoj datoteci zaglavlja i implementacije(kompleksniBroj.hpp i KompleksniBroj.cpp)
// U glavnoj datoteci includajte vašu datoteku i prikažite korištenje strukture i pripadnih funkcija.

#include <iostream>
#include "KompleksniBroj.hpp"

int main(){
    prikaziKompleksniBroj(23.3, 67.2);
    std::cout << zbrojiKompleksneBrojeve(23.3, 67.2).zbroj;
}