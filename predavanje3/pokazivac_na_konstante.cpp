// Podatak na koji pokazuje kojazivač je konstantan i nije ga moguće izmijeniti!
// Pokazivač se može izmjeniti i pokazati na neko drugo mjesto

#include <iostream>

int main(){
    int bodovi = 32;
    int maksimalanBrojBodova = 100;

    const int *p = &bodovi;
    *p = 50; // greška
    p = &maksimalanBrojBodova; // ok