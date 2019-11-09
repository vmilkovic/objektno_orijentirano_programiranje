#include <iostream>
#include <string>

using std::cout;
// Izradite klasu Valuta.
// -Klassa mora sadržavati informacije o nazivu valute (EUR) i o tečaju valute u odnosu na kune.
// -Definiraj dva konstruktora. Jedan konstruktor koji će postaviti naziv valute i drugi konstruktor koji će postaviti naziv valute i tečaj valute.
//  Koristite inicijalizacijske liste i delegiranje konstruktora.
// -Implementirajte metodu kupi koja ima jedan parametar: Količinu KN za koju želimo kupiti navedenu valutu. Metoda vraća pretovrene kune u valute.
//  Npr. double euri = valuta.kupi(350.45);
// -Implemetirajte setter koji će omogućiti naknadnu promjenu tečaja.
// -U glavnoj funkciji main prikažite korištenje navedene klase i svih konstruktora i metoda.

using std::endl;
using std::string;

class Valuta {
    public:
        Valuta(string naziv) :
            Valuta(naziv, 0.0){}
        Valuta(string naziv, double tecaj) :
            naziv(naziv), tecaj(tecaj) {}
        double kupi(double kolicinaKn){
            double kolicina = tecaj * kolicinaKn;
            return kolicina;
        }
        void promijeniTecaj(double noviTecaj){
            this->tecaj = noviTecaj;
        }
    private:
        string naziv;
        double tecaj;
};

int main(){
    Valuta euro("EUR", 7.5);
    euro.promijeniTecaj(22);
    Valuta dolar("USD");
    dolar.promijeniTecaj(7);
    cout << dolar.kupi(10);
}