// Izradite funkciju koja prikazuje elemente polja, ali i račun prosječnu vrijednost i maksimalnu vrijednost.
// Prototip funkcije je: int prikaziPolje(int[], int n, int*, int*);
// Neka zadnja dva parametra (pokazivači) imaju pretpostavljene vrijednosti postavljene kao null pokazivače.
// Ukoliko se proslijedi treći parametar, tada funkcija u taj pokazivač mora pohraniti prosječnu vrijednost elemenata polja i vratiti 1 kao obavijest da je došlo do izračuna.
// Ukoliko se proslijedi četvrti parametar, tada funkcija u taj pokazivač mora pohraniti maksimalnu vrijednost elemenata polja i vratiti 1 kao obavijest da je došlo do izračuna.
// Ukoliko se proslijede i treći i četvrti parametar, funkcija mora izračunati obje vrijednosti i vratiti 2.
// Funkcija mora ispravno prikazati elemente polja ako se pozove kao prikaziPolje(mojePolje, 5);
#include <iostream>

int prikaziPolje(int polje[], int n, int *prosjek = nullptr, int *maksimum = nullptr){
    int brOperacija = 0;

    if( prosjek != nullptr ){
        *prosjek = 0;
        brOperacija++;
    }

    if(maksimum != nullptr){
        *maksimum = polje[0];
        brOperacija++;
    }

    for(int i = 0; i < n; i++){
        std::cout << polje[i] << " ";

        if(prosjek != nullptr ){
            *prosjek = *prosjek + polje[i];
        }

        if(maksimum != nullptr){
            if(polje[i] > *maksimum){
                *maksimum = polje[i];
            }
        }
    }

    std::cout << std::endl;

    if(prosjek != nullptr){
        *prosjek = *prosjek / n;
    }

    return brOperacija;
}

#define N 5

int main(){
    int polje[N] ={9, 4, 2, 6, 5};
    int prosjek;
    int maksimum;

    prikaziPolje(polje, N);
    prikaziPolje(polje, N, &prosjek);
    prikaziPolje(polje, N, &prosjek, &maksimum);
    prikaziPolje(polje, N, nullptr, &maksimum);

    std::cout << "Prosjek: " << prosjek << std::endl;
    std::cout << "Maksimum: " << maksimum << std::endl;
}