#include <iostream>

class Tocka3D {
    public:
        void prikazPodataka(){
            std::cout << x << std::endl;
            std::cout << y << std::endl;
            std::cout << z << std::endl;
        }
        double getX(){
            return x;
        }
        void setX(double noviX){
            x = noviX;
        }
    private:
        double x;
        double y;
        double z;
};

int main(){
    Tocka3D tocka;
    tocka.setX(3.14);
    tocka.prikazPodataka();
}