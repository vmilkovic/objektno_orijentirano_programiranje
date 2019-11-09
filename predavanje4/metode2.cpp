#include <iostream>

class Tocka3D {
    public:
        void prikazPodataka(){
            std::cout << x << std::endl;
            std::cout << y << std::endl;
            std::cout << z << std::endl;
        }
    private:
        double x;
        double y;
        double z;
};

int main(){
    Tocka3D tocka;
    tocka.prikazPodataka();
}