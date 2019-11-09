#include <iostream>
#include <string>

class Automobil {
    public:
        // Konstruktor bez parametra
        Automobil(){
            snaga = 100;
        }
        // Konstruktor sa jednim parametrom
        Automobil(int nova_snaga){
            this->snaga = nova_snaga; // preporuka za korištenje this-> pristupu podatkovnim članovima
        }
        std::string proizvodjac;
        std::string model;
        int godiste;
        int snaga; // u ks
};

int main(){
    Automobil dostavni;
    std::cout << dostavni.snaga << std::endl;
    Automobil elektricni(300);
    std::cout << elektricni.snaga << std::endl;
}