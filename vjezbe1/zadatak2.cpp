/*  Izradite C++ program koji za uneseni prirodan broj prikazuje:

        *****
        1****
        12***
        123**
        1234*
        12345

Prirodan broj - pozitivan cijeli broj (1, 2, 3,...)

Ukoliko uneseni broj nije priodan ili je veći od 10, završite s izvođenjem programa.

*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

    int n;

    cout << "Unesite priodan broj manji ili jednak broju 10" << endl;
    cin >> n;

    if( n > 0 && n <= 10 ){
        for( int i = 0; i < 6; i++){
            for( int j = 0; j < 5; j++){
                if( i > j ){
                    cout << j + 1 ;
                } else {
                    cout << "*";
                }
            }
            cout << endl;
        }

    } else {

        return 0;

    }

}