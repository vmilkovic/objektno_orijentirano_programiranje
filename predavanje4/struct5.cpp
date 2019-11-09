// Možemo li koristiti operator pridruživanja kod struktura? Možemo

#include <iostream>

struct KompleksniBroj {
    double realni;
    double imaginarni;
};

int main(){
    KompleksniBroj kompleks1 {4,5};
    KompleksniBroj kompleks2;
    kompleks2 = kompleks1;

    std::cout << kompleks2.realni << " " << kompleks2.imaginarni;
}