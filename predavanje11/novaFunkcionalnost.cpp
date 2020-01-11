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
        Izvedena(int vrijednost) : Bazna(vrijednost) { }
        int getValue(){
            return nVrijednost;
        }
};

int main(){
    Izvedena cIzv(5);
    cIzv.identificirajSe();
    std::cout << "cIzv ima vrijednost: " << cIzv.getValue() << std::endl;

   /*  Bazna cBaz(5);
    std::cout << "cIzv ima vrijednost: " << cBaz.getValue() << std::endl; */ // greška jer Bazna klasa nema pristup metodi getValue u izvedenoj klasi
}