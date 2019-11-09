#include <iostream>
#include <string>

class Automobil {
    public:
        std::string proizvodjac;
        std::string model;
        int godiste;
        int snaga; // u ks
};

int main(){
    Automobil dostavni;
    std::cout << dostavni.snaga; // mora biti public da se može njemu pristupiti
}