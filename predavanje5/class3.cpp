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
        int dohvatiSnagu(){
            return snaga;
        }
    private:
        std::string proizvodjac;
        std::string model;
        int godiste;
        int snaga; // u ks
};

int main(){
    Automobil dostavni;
    cout << dostavni.dohvatiSnagu();
}