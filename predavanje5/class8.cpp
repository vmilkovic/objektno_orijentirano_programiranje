#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Automobil {
    public:
        Automobil(){
            this->proizvodjac = "";
            this->model = "";
            this->godiste = 2000;
            this->snaga = 100;
        }
        Automobil(string proizvodjac, string model){
            this->proizvodjac = proizvodjac;
            this->model = model;
        }
        Automobil(string proizvodjac, string model, int godiste ):
            Automobil(proizvodjac, model){
                this->godiste = godiste;
            }
        Automobil(string proizvodjac, string model, int godiste, int snaga) :
            Automobil(proizvodjac, model, godiste){
                this->snaga = snaga;
            }
    string proizvodjac;
    string model;
    int godiste;
    int snaga;
};

int main(){
    Automobil auto1("VW", "Golf", 2015, 90);
    Automobil auto2("VW", "Golf", 2015);
    Automobil auto3("VW", "Golf");
    Automobil auto4();
    cout << auto1.godiste << endl;
    cout << auto2.godiste << endl;
    cout << auto3.godiste << endl;
    cout << auto4 << endl;
}