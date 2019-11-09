// Ne smije se definirati fukcije cin kao ovjde ako koristimo includove, proučit detaljnije...
#include "funkcije.hpp"

void cin(){
    cout << "ja sam cin";
}

int main(){
    cin();
    funkcija();
}