namespace polja {
    void prikaziPolje(int[], int);
}

#include <iostream>

void polja::prikaziPolje(int polje[], int n){
    for( int i = 0; i < n; i++){
        std::cout << polje[i] << std::endl;
    }
}