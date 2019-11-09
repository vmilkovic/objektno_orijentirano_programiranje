#include <iostream>

class Tocka3D {
    public:
        double x;
    private:
        double y;
        double z;
};

int main(){
    Tocka3D tocka;

    std::cout << tocka.x << std::endl;
    std::cout << tocka.y << std::endl; // error jer je private
}