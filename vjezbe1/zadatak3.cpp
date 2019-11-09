// Izmjenite program iz prošlog zadatka na način da algoritam za prikaz brojeva implementirate u zasebnoj funkciji.
// U glavnom programu pozovite funkciju koja ima jedan parametra:
// prirodan broj n.
// Prototip funckije: bodi brojevi(int n);

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void brojevi( int n){

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

        return;

    }

}

int main(){

    int n;
    cout << "Unesite priodan broj manji ili jednak broju 10" << endl;
    cin >> n;

    brojevi( n );

}