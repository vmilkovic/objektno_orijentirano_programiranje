#include <iostream>

class Parent {
    public:
        // base class constructor
        Parent(){
            std::cout << "Constructor Inside base class" << std::endl;
        }
        ~Parent(){
            std::cout << "Destructor Inside base class" << std::endl;
        }
};

// sub class
class Child : public Parent {
    public:
        // sub class constructor
        Child(){
            std::cout << "Constructor Inside sub class" << std::endl;
        }
        ~Child(){
            std::cout << "Destructor Inside sub class" << std::endl;
        }
};

// main function
int main(){
    // creating object of sub class
    Child obj;
}