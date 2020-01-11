#include <iostream>

class Majka {
    public:
        Majka(){
            std::cout << "Majka: bez parametara\n";
        }
        Majka(int a){
            std::cout << "Majka: int parametara\n";
        }
};

class Kcerka : public Majka {
    public:
        Kcerka(int a) : Majka(a){
            std::cout << "Kcerka: int parametara\n\n";
        }
};

int main(){
    Kcerka kecer1(19);
}