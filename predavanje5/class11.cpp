#include <iostream>
#include <string>

using std::string;

class Automobil {
    public:
        Automobil(){
            std::cout << "Konstruktor!!";
        }
        ~Automobil(){
            std::cout << "Dekonstruktor!";
        }
        string proizvodjac;
        string model;
        int godiste;
        int snaga;
};

int main(){

    Automobil auto1;
    Automobil auto2;
    Automobil auto3;

}