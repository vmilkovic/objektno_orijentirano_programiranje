// Podatak na koji pokazuje pokazivalč se može izmjeniti!
// Pokazivač se ne može izmijeniti i ne može pokazati neko drugo mjesto!

#include <iostream>

int main(){
    int bodovi = 32;
    int maksimalanBrojBodova = 100;
    int *const p = &bodovi;
    *p = 50; // ok
    p = &maksimalanBrojBodova; // greska
}