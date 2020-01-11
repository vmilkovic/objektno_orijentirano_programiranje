#include <iostream>

class Osoba {
    public:
        void setMobitel() { std::cout << "Bazna1" << std::endl; }
        void setMobitel(int y) {
            std::cout << "Bazna2" << std::endl;
        }
    protected:
        int mobitel;
};

class Prijatelj : public Osoba {
    public:
        void setMobitel(int y) {
            std::cout << "Izvedena" << std::endl;
            mobitel = y;
        }
};

int main(){
    Prijatelj stipe;
    stipe.setMobitel(5);
    //stipe.setMobitel(); // greška
}