// Izmjenite funkciju iz prošlog zadtaka na način da definirate pretpostavljene vrijednosti argumenata n.
// Ukoliko se ne proslijedi argument funkciji, neka pretpostavljena vrijednost parametara n bude 5.


#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void brojevi( int n = 5){

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

    string n;
    cout << "Unesite priodan broj manji ili jednak broju 10" << endl;

    cin >> n;

    if( getline(std::cin, n) ){
        brojevi();
    } else {
        int b = stoi(n);
        brojevi(b);
    }

}