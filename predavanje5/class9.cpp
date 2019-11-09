#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Automobil {
    public:
        Automobil(string proizvodjac = "VM", string model = "Golf") : proizvodjac(proizvodjac), model(model){}
        string proizvodjac;
        string model;
        int godiste;
        int snaga;
};

int main(){
    Automobil auto1;
    cout << auto1.proizvodjac << " " << auto1.model << endl;
    Automobil auto2("Ford");
    cout << auto2.proizvodjac << " " << auto2.model << endl;
    Automobil auto3("Ford", "Focus");
    cout << auto3.proizvodjac << " " << auto3.model << endl;
}