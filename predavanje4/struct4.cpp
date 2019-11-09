#include <iostream>

struct KompleksniBroj {
    double realni;
    double imaginarni;
};

KompleksniBroj zbroji(KompleksniBroj broj1, KompleksniBroj broj2){
    KompleksniBroj rezultat;
    rezultat.realni = broj1.realni + broj2.realni;
    rezultat.imaginarni = broj1.imaginarni + broj2.imaginarni;
    return rezultat;
}

int main(){
    KompleksniBroj kompleks1 {4,5};
    KompleksniBroj kompleks2 {2,-3};
    KompleksniBroj kompleks3 = zbroji(kompleks1, kompleks2);

    std::cout << kompleks3.realni << " " << kompleks3.imaginarni;
}