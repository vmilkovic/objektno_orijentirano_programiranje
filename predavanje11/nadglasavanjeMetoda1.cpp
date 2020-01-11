#include <iostream>

class Bazna {
    protected:
        int nVrijednost;
    public:
        Bazna(int vrijednost) : nVrijednost(vrijednost) { }
        void identificirajSe(){
            std::cout << "Ja sam bazna klasa" << std::endl;
        }
};

class Izvedena : public Bazna {
    public:
        Izvedena(int vrijednost): Bazna(vrijednost) {}
        void identificirajSe(){
            std::cout << "Ja sam izvedena klasa" << std::endl;
        }
};

int main(){
    Bazna cBaz(5);
    cBaz.identificirajSe();
    Izvedena cIzv(7);
    cIzv.identificirajSe();
}