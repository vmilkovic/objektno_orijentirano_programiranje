// Možemo li koristiti operator usporedbe kod struktura? Ne možemo!

#include <iostream>

struct KompleksniBroj {
    double realni;
    double imaginarni;
};

int main(){
    KompleksniBroj kompleks1 {4,5};
    KompleksniBroj kompleks2 {2,5};
    if(kompleks1 == kompleks2){
        // greska -> ali možemo kompleks1.realni == kompleks2.realni
    }
}
