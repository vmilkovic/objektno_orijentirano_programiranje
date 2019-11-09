// Izradite klase Osoba i BankovniRacun
// -Izradite klasu Osoba. Klasa neka sadržava dva podatka, ime i prezime osobe.
//  Implementirajte jedan konstruktor koji omogućava postavljanje imena i prezimena osobe.
// - Izradite gettere za podatkovne članove klase Osoba.
// - Izradite klasu bankovni račun koja sardži podatkovne članove objekt tipa Osoba i tretno stanje računa.

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Osoba {
    public:
        Osoba(string ime, string prezime ) : ime(ime), prezime(prezime){};
        string getIme(){
            return ime;
        }
        string getPrezime(){
            return prezime;
        }
    private:
        string ime;
        string prezime;
};

class BankovniRacun {
    public:
        BankovniRacun(string ime, string prezime ) : osoba(ime, prezime){
            stanje = 0.0;
        }
        void uplati(double iznos){
            stanje = stanje + iznos;
        }
        void isplati(double iznos){
            stanje = stanje - iznos;
        }
        void prikaziStanje(){
            cout << osoba.getIme() << " " << osoba.getPrezime();
            cout << ": " << stanje << " KN" << endl;
        }
    private:
        Osoba osoba;
        double stanje;
};

int main(){

    BankovniRacun racun1("Hrvoje", "Horvat");
    racun1.uplati(500);
    racun1.isplati(100);
    racun1.prikaziStanje();
};