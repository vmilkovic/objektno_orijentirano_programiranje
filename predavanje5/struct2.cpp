#include <iostream>

struct Tocka {
    int x;
    int y;
};

bool uIshodistu(Tocka t){
    if(t.x == 0 && t.y == 0){
        return true;
    }
    return false;
}

int main(){
    Tocka tocka = {3,4};
    if(uIshodistu(tocka) == true){
        std::cout << "Tocka je u ishodistu";
    }
}
