#include <iostream>

class Osoba {
    private: // PRIVATNI MODIFIKATOR
        void setMobitel(int y) {
            std::cout << "Bazna" << std::endl;
        }
    protected:
        int mobitel;
};

class Prijatelj : public Osoba {
    public: // PUBLIC MODIFIKATOR
        void setMobitel(int y) {
            std::cout << "Izvedena" << std::endl;
            mobitel = y;
        }
};

int main(){
    Prijatelj stipe;
    stipe.setMobitel(5); // poziva potiskujucu metodu iz izvedene klase
}