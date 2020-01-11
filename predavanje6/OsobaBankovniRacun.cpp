// Izradite klase Osoba i BankovniRacun
// Izradite klasu Osoba. Klassa neka sadržava dva podatka, ime i prezime osobe. Imlpementirajte jedan konstruktor koji omogućava postavljanje imena i prezimena osobe.
// Izradite gettere za podatkovne članove klase Osoba.
// Izradite klasu bankovnog računa koji sadržava podatkovne članove: objekt tipa Osoba i trenutno stanje računa.
// Bankovni račun neka ima jedan konstruktor koji sadrži dva parametra: ime i prezime. Konstruktor bankovnog računa će proslijediti parametre konstruktoru osobe i inicijalizirati stanje računa na 0.0;
// Implementirajte metode upalti i isplati koje dodaju sredstva na račun, te metodu za prikaz trenutnog stanja računa.

#include <iostream>
#include <string>

using std::string;

class Osoba {
    public:
        Osoba(string ime, string prezime) :
            ime(ime), prezime(prezime) {}

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
        BankovniRacun(string ime, string prezime) : osoba(ime, prezime) {
            stanje = 0.0;
        }
        void uplati(double iznos){
            stanje = stanje + iznos;
        }
        void isplati(double iznos){
            stanje = stanje - iznos;
        }
        void prikaziStanje() {
            std::cout << osoba.getIme() << " " << osoba.getPrezime();
            std::cout << ": " << stanje << " KN" << std::endl;
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
}