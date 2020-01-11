#include <iostream>

using std::cout;

void demo(){
    // staticka varijabla
    static int count = 0;
    cout << count << " ";
    // vrijednost je azurirana i biti ce zadrzana i tijekom sljedeceg poziva funkcije
    count++;
}

int main(){
    for(int i = 0; i < 5; i++){
        demo();
    }
    return 0;
}