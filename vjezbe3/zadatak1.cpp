// Stvorite strukturu KompleksniBroj koja se sastoji od dvaju podatkovnih članova (decimalni brojevi) - realni i imaginarni dio.
// Izradite funkciju prikaziKompleksniBroj koj prikazuje kompleksni broj u obliku: Re: 23.3, Im: 67.2
// Izradite funkciju zbrojiKompleksneBrojeve koja zbraja kompleksne brojeve. Funkcija vraća novu strukturu koja je rezultat zbrajanja.
// U glavnoj funkciji deklarirajte i incijalizirajte dvije strukture te prikaćite gorištenje gore implementiranih funkcija.

#include <iostream>

struct kompleksniBroj {
    double realni;
    double imaginarni;
};

void prikaziKompleksniBroj( double realni, double imaginarni ){
    kompleksniBroj brojevi { realni, imaginarni };
    std::cout << "Re: " << brojevi.realni << " " << "Im: " << brojevi.imaginarni << std::endl;
}

struct zbrojBrojeva {
    double zbroj;
};

zbrojBrojeva zbrojiKompleksneBrojeve( double realni, double imaginarni ){
    kompleksniBroj brojevi { realni, imaginarni };
    zbrojBrojeva rezultat;
    rezultat.zbroj = brojevi.realni + brojevi.imaginarni;
    return rezultat;
}

int main(){
    prikaziKompleksniBroj(23.3, 67.2);
    std::cout << zbrojiKompleksneBrojeve(23.3, 67.2).zbroj;
}