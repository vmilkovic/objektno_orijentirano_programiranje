// Izradite klasu Valuta
// Klasa mora sadržavati informacija o nazivu valute (EUR) i o tečaju valute u odnosu na kune.
// Definirajte dva konstrukutra. Jedan konstruktor koji će postaviti naziv valute i drugi konstruktor koji će postaviti naziv valute i tečaj valute. Koristite inicijalizacijske liste i delgiranje konstruktora.
// Implementirajte metodu kupi koja ima jedan parametar: količina KN za koju želimo kupiti navedenu valutu. Metoda vraća pretvorene kune u valutu. Npr. double euri = valuta.kupi(350.45);
// Implementirajte setter koji će omogućiti naknadnu promjenu tečaja.
// U glavnoj funkciji main prikažite korištenje navedene klase i svih konstruktora i metoda.
// Klasa mora sadržavati informacija o nazivu valute (EUR) i o tečaju valute u odnosu na kune.

#include <iostream>
#include <string>

using std::string;

class Valuta {
    public:
        Valuta(string naziv) :
            Valuta(naziv, 1.0) {}

        Valuta(string naziv, double tecaj) :
            naziv(naziv), tecaj(tecaj) {}

        // setter
        void setTecaj(double tecaj){
            if( tecaj > 0.0){
                this->tecaj = tecaj;
            }
        }

        double kupi(double kune){
            return kune / tecaj;
        }
    private:
        string naziv;
        double tecaj;
};

int main(){
    Valuta euro("EUR", 7.5);
    double euri = euro.kupi(500);
}