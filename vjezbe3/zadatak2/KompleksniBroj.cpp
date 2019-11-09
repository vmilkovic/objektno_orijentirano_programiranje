#include <iostream>
#include "KompleksniBroj.hpp"

void prikaziKompleksniBroj( double realni, double imaginarni ){
    kompleksniBroj brojevi { realni, imaginarni };
    std::cout << "Re: " << brojevi.realni << " " << "Im: " << brojevi.imaginarni << std::endl;
}

zbrojBrojeva zbrojiKompleksneBrojeve( double realni, double imaginarni ){
    kompleksniBroj brojevi { realni, imaginarni };
    zbrojBrojeva rezultat;
    rezultat.zbroj = brojevi.realni + brojevi.imaginarni;
    return rezultat;
}