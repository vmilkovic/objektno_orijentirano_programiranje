// Izdvojite strukturu i irađene funkciju u zasebe datoteke zaglavlja film.hpp i implemetacije film.cpp
// U glavnom programu, includajte datoteku zaglavnja i isprobajte implementirane funkcije na jednoj strukturi.
#include "film.hpp"

int main(){
    Film noviFilm = { "Joker", 2019, 122 };
    prikaziFilm(noviFilm);
}