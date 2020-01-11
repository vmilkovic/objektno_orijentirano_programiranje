#include <iostream>

class Covjek {
    public: // PRIVATNI MODIFIKATOR
        void setMobitel(int y) {
            std::cout << "Bazna" << std::endl;
        }
    int mobitel;
};

class Prijatelj : public Covjek {
    public: // PUBLIC MODIFIKATOR
        void setMobitel(int y) {
            std::cout << "Izvedena" << std::endl;
            mobitel = y;
        }
};

int main(){
    Prijatelj marko;
    // poziva "public" metodu iz uzvedene klase
    marko.setMobitel(5);
    // poziva baznu metodu
    marko.Covjek::setMobitel(5);
}