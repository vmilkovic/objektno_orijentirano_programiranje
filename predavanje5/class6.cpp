#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Automobil {
    public:
        Automobil(){
            snaga = 100;
        }
        Automobil(int nova_snaga) : snaga(nova_snaga){}
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
        std::string mode;
        int godiste;
        int snaga; // u ks
};

int main(){
    Automobil dostavni;
    Automobil elektricni(500);
    cout << elektricni.dohvatiSnaguKS() << endl;
}