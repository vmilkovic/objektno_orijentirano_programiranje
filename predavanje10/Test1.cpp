#include <iostream>

class Test {
    private:
        static int x;
    public:
        Test(){ x++; }
        static int getX() { return x; }
};

int Test::x = 0;

int main(){
    std::cout << Test::getX() << " ";
    Test t[5]; // poziva 5 puta konstruktor koji uvećava statičku varijablu x
    std::cout << Test::getX();
}