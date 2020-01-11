#include <iostream>

class A {
    public:
        void ispis() {};
};

class B {
    public:
        void ispis() {};
};

class C : public B, public A {
    public:
        C() { std::cout << "C's constructor called" << std::endl; }
};

int main(){
    C c;
    c.ispis(); // GRESKA
    c.A::ispis(); // poziv iz klase A
    c.B::ispis(); // poziv iz klase B
}