// Podatak na koji pokazuje pokazivač je konstantan i nije ga moguće izmjeniti!
// Pokazivač se ne može izmijeniti i ne može pokazivati na neko drugo mjesto!

#include <iostream>

int main(){
    int bodovi = 32;
    int maksimalanBrojBodova = 100;

    const int *const p = &bodovi;
    *p = 50; // greska
    p = &maksimalanBrojBodova; // greska
}