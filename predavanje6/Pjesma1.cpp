#include <iostream>

class Pjesma {
    public:
        // konstruktor
        Pjesma(int broj) : broj(broj){
            std::cout << "Pozvan konstruktor (" << broj << ")!" << std::endl;
        }

        // dekostruktor
        ~Pjesma(){
            std::cout << "Pozvan dekonstruktor (" << broj << ")!" << std::endl;
        }
    private:
        int broj;
};

Pjesma* stvoriPjesmu(int broj){
    return new Pjesma(broj);
}

/* void funkcija(){
    Pjesma pjesma2(2);
} */

int main(){
    /* funkcija(); */
    /* Pjesma *pjesma1 = new Pjesma(1);
    Pjesma *pjesma2 = new Pjesma(2);
    Pjesma *pjesma3 = new Pjesma(3); */

    /* Objekti nisu implicitno pozvani i nemamo načina da ih izbrišemo (dekonstruktor se ne pokrene) jer objekt se ne uništi i ostaje u memoriji i ne možemo mu pristupiti */
    Pjesma *pjesma1 = stvoriPjesmu(1);
    Pjesma *pjesma2 = stvoriPjesmu(2);
    Pjesma *pjesma3 = stvoriPjesmu(3);

    /* Svaki objekt koji implicitno pozovemo moramo "ručno" obrisat */
    delete pjesma3;
    delete pjesma2;
    delete pjesma1;

    /*
        Svi objekti stvoreni pomoću new
        neće biti automatski biti uništeni kada završi blok u kojem su
        definirni
    */
}