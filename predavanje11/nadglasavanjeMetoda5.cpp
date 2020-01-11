#include <iostream>

class Osoba {
    public:
        void setMobitel(int y) { std::cout << "Bazna" << std::endl; }
    protected:
        int mobitel;
};

class Prijatelj : public Osoba {
    public:
        void setMobitel(int y){
            Osoba::setMobitel(y); // poziv metode iz bazne
            std::cout << "Izvedena" << std::endl;
            mobitel = y;
        }
};

int main() {
    Prijatelj stipe;
    stipe.setMobitel(5);
}