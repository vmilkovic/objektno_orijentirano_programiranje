// Želimo izraditi dvije klase: Pravokutnik i Trokut koje računaju površinu zadanih oblika.
// Što im je zajedničko, a što nije?
// Izradit ćemo baznu klasu Oblik koja će posjedovati zajednička svojstva klase Trokut i Pravokutnik
#include <iostream>

class Oblik {
    public:
        void setData(float a, float b){
            sirina = a;
            visina = b;
        }
    protected:
        float sirina;
        float visina;
};

class Trokut : public Oblik {
    public:
        float izracunPovrsine(){
            return (this->sirina * this->visina / 2.0);
        }
};

class Pravokutnik : public Oblik {
    public:
        float izracunPovrsine(){
            return (this->sirina * this->visina);
        }
};

int main(){
    Trokut t1;
    t1.setData(10, 10);
    std::cout << t1.izracunPovrsine() << std::endl;

    Pravokutnik p1;
    p1.setData(10, 10);
    std::cout << p1.izracunPovrsine() << std::endl;
}