#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Automobil{
    public:
        Automobil() : proizvodjac("Mazda"), model("3"){}
        Automobil(string proizvodjac = "VM", string model = "Golf") : proizvodjac(proizvodjac), model(model){}
        string proizvodjac;
        string model;
        int godiste;
        int snaga;
};

int main(){

    Automobil auto1; // Greška jer automobil ima više constructora
    cout << auto1.proizvodjac << " " << auto1.mode;

}