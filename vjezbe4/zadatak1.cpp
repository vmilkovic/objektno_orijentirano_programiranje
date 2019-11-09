// Izradite klasu Motocikl.
// -Klasa mora sadržavati informacije o proizvođaču, modelu motocikla i zapremnini motora. Npr. Kawasaki, Z300, 300.
// -Definirajte defaultni konstruktor koji će inicijalizirate sve podatkovne članove na prezne vrijednosti.
//  Proizvođač i model na prazan string, zapremninu na 0. Koristite inicijalizacijsku listu za incijalizaciju podatkovnih članova.
// -Definirajte dodatni konstruktor koj će omogoućiti postavljanje vrijednosti svih podatkovnih članova prilikom instanciranja na željene vrijednosti.
// -Definirajte dodatni konstruktor koji će omogućiti postavljanje samo proizvođača na željene vrijednosti.
//  Zapremnina neka se postavi na 0. Koristite delegiranje konstruktora.
// -Definirajte metodu koja prikazuje podake o motociklu na sljedeći način: Kawasaki Z300 (300).
// U glavnoj funkciji main prikažite korištenje navedene klase i svih konstruktora i metoda.

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Motocikl {
    public:
        //Motocikl() : proizvodac(""), model(""), zapremnina(0) {}
        Motocikl() : Motocikl("", "", 0) {}
        Motocikl(string proizvodac, string model) :
            Motocikl(proizvodac, model, 0) {}
        Motocikl(string proizvodac, string model, int zapremnina) :
            proizvodac(proizvodac) , model(model), zapremnina(zapremnina){
                if( zapremnina < 0){
                    zapremnina = 0;
                }
            }
        void prikaz(){
            cout << proizvodac << " " << model << " (" << zapremnina << ")" << endl;
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