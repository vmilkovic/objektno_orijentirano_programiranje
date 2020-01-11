#include <iostream>

class Klasa {
    public:
        Klasa(){
            i = 0;
            std::cout << "Inside Constructor\n";
        }
        ~Klasa(){ std::cout << "Inside Destructor \n"; }
        // staticka funkcija
        static void printMsg(){
            std::cout << "Dobrodosli u klasu!\n";
        }
    private:
        int i;
};

// main funkcija
int main(){
    /* if(true){
        //Klasa obj;
        static Klasa obj;
    }
    std::cout << "End of main\n"; */

    Klasa::printMsg();
}