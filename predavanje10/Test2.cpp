#include <iostream>

class Test {
    private:
        static int count;
    public:
        Test& fun();
};

int Test::count = 0;

Test& Test::fun(){
    Test::count++;
    std::cout << Test::count << " ";
    return *this;
}

int main(){
    Test t;
    t.fun().fun().fun().fun().fun();
}