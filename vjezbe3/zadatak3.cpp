// U novom projektu stviret klasu KompleksniBroj koja sadrži dva podatkovna člana, decimalne brojeve.
// Stvorite getere i setere za podatkovne članove.
// Implementirajte metodu izracunajApsolutnuVrijednost koja vraća double vrijednost. Apsolutna vrijednost se izračunava na sljedeći način: korijen iz -> Re na kvadrat + Im na kvadrat
// Implementirajte metodu prikazi koja prikazuje kompleksni broj u obliku: Re: 23.3, Im: 67.2
// Implementirajte metodu zbrojikompleksniBroj koji zbraja trenutni objekt kompleksnog broja s nekim drugim kompleksnim brojem.
// U glavnoj funkciji prikažite korištenje nevede klase i pripadnih metoda.

#include <iostream>
#include <cmath>

class KompleksniBroj {
    public:
        void setRealni(double realni){
            this->realni = realni;
        }
        void setImaginarni(double imaginarni){
            this->imaginarni = imaginarni;
        }
        double getRealni(){
            return realni;
        }
        double getImaginarni(){
            return imaginarni;
        }
        double izracunajApsolutnuVrijednost(){
            return sqrt(pow(realni, 2) + pow(imaginarni, 2));
        }
        void prikazi(){
            std::cout << "Re: " << realni << " " << "Im: " << imaginarni << std::endl;
        }
        void zbrojiKompleksniBroj(KompleksniBroj broj){
            double realniBroj       = broj.getRealni();
            double realniImaginarni = broj.getImaginarni();
            realni     = realniBroj + realni;
            imaginarni = realniImaginarni + imaginarni;
        }
    private:
        double realni;
        double imaginarni;
};

int main(){
    KompleksniBroj broj1;
    broj1.setRealni(3);
    broj1.setImaginarni(3);

    std::cout << broj1.izracunajApsolutnuVrijednost();
    std::cout << broj1.getRealni() << std::endl;
    broj1.prikazi() ;

    KompleksniBroj broj2;
    broj2.setRealni(4);
    broj2.setImaginarni(4);
    broj2.zbrojiKompleksniBroj(broj1);
    std::cout << broj2.getRealni() << std::endl;
    std::cout << broj2.getImaginarni() << std::endl;
}