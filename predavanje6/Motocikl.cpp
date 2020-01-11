// Izradite klasu Motocikl.
// Klasa mora sadržavati informacije o proizvođaču, modelu motocikla i zapremnini motora. Npr.: Kawasaki, Z300, 300.
// Definirajte defaultni kontruktor koji će inicijalizirati sve podatkovne članove na prazne vrijednosti. Proizvođač i model na prazan string, zapremninu na 0. Koristite inijalizacijsku listu za inicijalizaciju podatkovnih članova.
// Definirajte dodatni konstruktor koji će omogućiti postavljanje samo proizviđača i modela na željene vrijednosti. Zapremnina neka se postavi na 0. Koristite delegiranje konstruktora.
// Definirajte motodu koja prikazije podatke o motociklu na sljedeći način: Kawasaki Z300 (300).
// U glavnoj funkciji main prikažite korištenje navedene klase i svih konstruktora i metoda.

#include <iostream>
#include <string>

using std::string;

class Motocikl {
    public:
        // Inicijalizacijska lista
        Motocikl() : proizvodac(""), model(""), zapremnina(0) { }

        // Delegiranje konstruktora
        Motocikl(string proizvodac, string model) :
            Motocikl(proizvodac, model, 0) { }

        // Dodatni konstruktor
        Motocikl(string proizvodac, string model, int zapremnina) :
            proizvodac(proizvodac), model(model), zapremnina(zapremnina) {
                if( zapremnina < 0 ){
                    zapremnina = 0;
                }
        }

        void prikaz(){
            std::cout << proizvodac << " " << model << " (" << zapremnina << ")" << std::endl;
        }

    private:
        string proizvodac;
        string model;
        int zapremnina;
};

int main(){
    Motocikl motor1;
    Motocikl motor2("Kawasaki", "Z300", 300);
    Motocikl motor3("Yamaha", "MT-07");
    motor1.prikaz();
    motor2.prikaz();
    motor3.prikaz();
}