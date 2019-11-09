// U prošle funkcije dodajte pretpostavljene vrijednosti argumenata kako bi se lementi polja mogli odvojiti porizvoljnim znakom ili tekstom.
// Ukoliko argument koji odjeljuje nije zadan, neka se argument odjeljuje zarezom.

#include <iostream>

using std::cout;
using std::endl;

void splitArray( int array[], int arrayLength, char splitBy = ',' ){

   for( int i = 0; i < arrayLength; i++ ){

       if( i == arrayLength - 1 ){
            cout << array[i] << endl;
       } else {
            cout << array[i] << splitBy;
       }

   }

}

void splitArray( float array[], int arrayLength, char splitBy = ',' ){

   for( int i = 0; i < arrayLength; i++ ){

       if( i == arrayLength - 1 ){
            cout << array[i] << endl;
       } else {
            cout << array[i] << splitBy;
       }

   }

}

int main(){

    int arr1[4] = { 1, 2, 4, 6 };
    float arr2[4] = { 1.5, 2.6, 4.7, 6.9 };
    splitArray( arr1, 4, '/' );
    splitArray( arr2, 4 );

}