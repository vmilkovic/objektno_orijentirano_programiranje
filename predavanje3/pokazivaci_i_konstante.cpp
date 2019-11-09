#include <iostream>

using std::cout;

void prikaziVarijablu1(const int *varijabla){
    cout << *varijabla;
    // *varijabla = 3 <-- GRESKA!!!
}

void prikaziVarijablu2(const int *const varijabla){
    cout << *varijabla;
    // *varijabla = 3 <-- GRESKA!!!
}

int main(){
    int broj = 2;
    prikaziVarijablu1(&broj);
    prikaziVarijablu2(&broj);
}