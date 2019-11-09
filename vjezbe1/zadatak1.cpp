// Predloženo programo riješenje napsiano u C Programskom je prepravite u C++ programski jezik.
// Koristite C++ funkcije za unos i prikaz podataka.
// Izmjenite program tako da mežete unositi decimalne brojeve.
// Ispišite rezultate na dvije decimale.

/* #include <stdio.h>

int main(void){

    int a;
    int b;
    int c;
    int d;

    printf("Unesi prvi broj:");
    scanf("%d",&a);

    printf("Unesi drugi broj:");
    scanf("%d", &b);

    c = a + b;
    d = a / b;

    printf("Zbroj je: %d\n", c);
    printf("Kvocijent je: %d\n", d);

    return 0;
} */

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){

    float a;
    float b;
    float c;
    float d;

    cout << "Unesi prvi broj: " << endl;
    cin >> a;

    cout << "Unesi drugi broj:" << endl;
    cin >> b;

    c = a + b;
    d = a / b;

    cout << "Zbroj je: " << fixed << setprecision(2) << c << endl;
    cout << "Kvocijent je: " << setprecision(2) << d << endl;

}