#include <iostream>

int main(){
    int varijabla;
    // nas standard prepruca incijalizaciju svih pokazivaca
    // prilikom deklaracije
    // ili na varijablu ili je null pokazivac
    int *p1 = &varijabla;
    *p1 = 50;

    int *p2 = nullptr;
    // ili
    int *p3 {nullptr};
}