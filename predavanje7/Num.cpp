#include <iostream>

class Num {
    public:
        Num(int x = 0) : value(x) {}
        int getValue() { return value; }
        void setValue(int value) { this->value = value; }
        void info(){ std::cout << value << std::endl; }
        // drugi element uvijek deklariramo kao referencu na konstantu
        Num operator+(const Num &n2){
            Num noviBroj;
            noviBroj.value = value + n2.value;
            return noviBroj;
        }
        Num& operator=(const Num &num){
            this->value = num.value;
            return * this;
        }
        bool operator==(const Num &num){
            if(value == num.value){
                return true;
            }
            return false;
        }
    private:
        int value;
};

int main(){
    /*Num x1(10);
    Num x2(20);
    Num x3 = x1 + x2; // Da li ce ovo funkcionirati?
    std::cout << "Rezultat je " << x3.getValue(); */

   /*  Num x1(10);
    Num x2(20);
    Num x3=x2;

    x1=x3;
    x1.info();
    x2.info();
    x3.info(); */

    Num x1(10);
    Num x2(20);
    Num x3(30);

    x1 = x2 = x3;

    x1.info();
    x2.info();
    x3.info();

}