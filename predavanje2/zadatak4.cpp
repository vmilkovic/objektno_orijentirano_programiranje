// Napišite funkciju koja će međusobno zamijeniti vrijednosti dvjema varijablama (swap).
// Varijale su deklarirane u main() funkciji. Korisite reference.

#include <iostream>

void swap(int &x, int &y){
    int tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int broj1 = 1;
    int broj2 = 2;
    swap(broj1, broj2); // brojevi moraju biti spremljeni u varijablu jer se referencijaju na njih.
}