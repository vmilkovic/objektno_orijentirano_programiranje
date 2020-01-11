#include <iostream>

class Tocka {
    public:
        Tocka(int x, int y) {
            this->x = new int(x);
            this->y = new int(y);
        }
        // copy konstruktor
        Tocka(const Tocka &tocka){
            this->x = new int(*(tocka.x));
            this->y = new int(*(tocka.y));
        }
        ~Tocka(){
            delete x;
            delete y;
        }
        void setX(int x) { *(this->x) = x; } // setter
        void prikazi() {
            std::cout << "(" << *x << ",";
            std::cout << *y << ")" << std::endl;
        }
    private:
        int *x;
        int *y;
};

int main(){
   /*
    Tocka t1(2,3);
    Tocka t2 = t1; // implicirani copy konstruktor (automatski)

    t2.setX(8);
    t1.prikazi();
    t2.prikazi(); */

    Tocka t1(2,3);
    Tocka t2 = t1;
    t1.setX(5);
    t1.prikazi();
    t2.prikazi();
}