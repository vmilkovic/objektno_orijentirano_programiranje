#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Automobil {
    public:
        Automobil() : snaga(100){}
        Automobil(int nova_snaga) : snaga(nova_snaga){}
        Automobil(string proizvodjac, string model):
            proizvodjac(proizvodjac), model(model){
            // ovjde se opet moze nalaziti kod
            snaga = 400;
        }
        int dohvatiSnaguKS(){
            return snaga;
        }
        int dohvatiSnaguKW(){
            return static_cast<int>(snaga * 0.745);
        }
        void postaviSnaguKS(int snaga){
            this->snaga = snaga;
        }
    private:
        string proizvodjac;
        string model;
        int godiste;
        int snaga; // u ks
};

int main(){
    Automobil brzi("Audi", "R8");
    cout << brzi.dohvatiSnaguKS() << endl;
}