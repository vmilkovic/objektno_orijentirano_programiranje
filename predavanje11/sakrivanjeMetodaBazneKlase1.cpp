#include <iostream>

class Osoba {
    protected:
        void setMobitel(int y) { std::cout << "Bazna" << std::endl; }
    protected:
        int mobitel;
};

class Prijatelj : public Osoba {
    public:
        using Osoba::setMobitel; // ne koristi se metodski operator
};

int main(){
    Prijatelj stipe;
    stipe.setMobitel(5);
}