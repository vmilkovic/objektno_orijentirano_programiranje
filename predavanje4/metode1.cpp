#include <iostream>

class Tocka3D {
    private:
        void prikazPodataka(){
            std::cout << x << std::endl;
            std::cout << y << std::endl;
            std::cout << z << std::endl;
        }
        double x;
        double y;
        double z;
};

int main(){
    Tocka3D tocka;
    tocka.prikazPodataka(); // error jer je privatna metoda
}