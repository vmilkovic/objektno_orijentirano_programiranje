// Izradite funkciju koja prihvaća dva parametra: cjelobrojno polje i cjelobrojnu vrijdnost n gdje je n broj elemenata u polju.
// Funkcija prikazuje sve elemente polja odvojene zarezom.
// U glavnoj funkciji definirajte polje i pozivte gornju funkciju.

#include <iostream>

using std::cout;

void splitArray( int array[], int arrayLength ){

   for( int i = 0; i < arrayLength; i++ ){

       if( i == arrayLength - 1 ){
            cout << array[i];
       } else {
            cout << array[i] << ", ";
       }

   }

}

int main(){

    int arr[4] = { 1, 2, 4, 6 };
    splitArray( arr, 4 );

}