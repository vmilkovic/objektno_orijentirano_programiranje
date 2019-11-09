#include <iostream>

struct Tocka3D {
    double x;
    double y;
    double z;
};

int main(){
    Tocka3D tocka;

    std::cout << "X: " << tocka.x << std::endl;
    std::cout << "Y: " << tocka.y << std::endl;
    std::cout << "Z: " << tocka.z << std::endl;
}