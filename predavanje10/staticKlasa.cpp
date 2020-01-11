#include <iostream>

class Klasa {
    public:
        static int i;
        Klasa(){
            // Do nothing
        }
};
int Klasa::i = 1; // vazna inicijalizacija

int main(){
    Klasa obj1;
    Klasa obj2;
    obj1.i = 2;
    obj2.i = 3;

    std::cout << obj1.i << " " << obj2.i;
}