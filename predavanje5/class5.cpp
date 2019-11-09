#include <iostream>
#include <string>

using std::cout;

class Automobil {
    public:
        Automobil(){
            snaga = 100;
        }
        Automobil(int nova_snaga){
            this->snaga = nova_snaga;
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
        std::string proizvodjac;
        std::string model;
        int godiste;
        int snaga; // u ks
};

int main(){
    Automobil dostavni;
    dostavni.postaviSnaguKS(300);
    cout << dostavni.dohvatiSnaguKW();
}