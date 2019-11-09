// Doradite prošli zadatak na način da izradite preklapanje funkcija (engl. function overloading) za polje koje se sastoji od decimalnih brojeva.
// U glavnoj funkciji definirajte i polje decimlnih brojeva i pozovite funkciju za prikaz elmenata polja.

#include <iostream>

using std::cout;
using std::endl;

void splitArray( int array[], int arrayLength ){

   for( int i = 0; i < arrayLength; i++ ){

       if( i == arrayLength - 1 ){
            cout << array[i] << endl;
       } else {
            cout << array[i] << ", ";
       }

   }

}

void splitArray( float array[], int arrayLength ){

   for( int i = 0; i < arrayLength; i++ ){

       if( i == arrayLength - 1 ){
            cout << array[i] << endl;
       } else {
            cout << array[i] << ", ";
       }

   }

}

int main(){

    int arr1[4] = { 1, 2, 4, 6 };
    float arr2[4] = { 1.5, 2.6, 4.7, 6.9 };
    splitArray( arr1, 4 );
    splitArray( arr2, 4 );

}