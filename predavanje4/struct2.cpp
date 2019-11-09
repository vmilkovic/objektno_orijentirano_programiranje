#include <iostream>

struct Tocka3D {
    double x;
    double y;
    double z;
};

int main(){
    /* Tocka3D tocka1;
    Tocka3D tocka2 = { 2.5, -3.4, 56.2 }; */
    // od C++ 11
    // -> VUB style guide
    Tocka3D tocka { 2.5, -3.4, 56.2 };

    tocka.z = 8.9;

    std::cout << "X: " << tocka.x << std::endl;
    std::cout << "Y: " << tocka.y << std::endl;
    std::cout << "Z: " << tocka.z << std::endl;
}