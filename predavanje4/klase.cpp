#include <iostream>

class Tocka3D {
    double x;
    double y;
    double z;
};

int main(){
    Tocka3D tocka;
    // instanciranje objekta ocka na temelju kase Tocka3D

    std::cout << tocka.x << std::endl; // error jer je private varijabla (ako nije specificirano onda je private)
}