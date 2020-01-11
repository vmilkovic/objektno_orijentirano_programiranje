#include <iostream>
#include <string>

using std::string;

class Pjesma {
    public:
        Pjesma(string naziv) : naziv(naziv){
            std::cout << "Pozvan konstruktor (" << naziv << ")!" << std::endl;
        }
        ~Pjesma(){
            std::cout << "Pozvan dekonstruktor (" << naziv << ")!" << std::endl;
        }
        void sviraj(){
            std::cout << "Sviram: " << naziv << std::endl;
        }
    private:
        string naziv;
};

int main(){

    Pjesma *vesela = nullptr;
    Pjesma losa("Losa pjesma");

    if(true){
        Pjesma nova("Nova pjesma");
        nova.sviraj();
        vesela = new Pjesma("Vesela pjesma");
    }

    if(vesela != nullptr){
        vesela->sviraj();
        delete vesela;
    }

    Pjesma stara("Stara pjesma");
    Pjesma *plesna = new Pjesma("Plesna pjesma");
    plesna->sviraj();
    delete plesna;

    stara.sviraj();
}