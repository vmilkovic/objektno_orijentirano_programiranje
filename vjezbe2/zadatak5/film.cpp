#include <iostream>
#include "film.hpp"

// u datoteci implementacije takoder ne bi trebali koristiti using.
// Ukoliko zaista zelimo koristiti using, mozemo ga koristiti unutar funkcija.

void prikaziFilm(const Film &film){
    std::cout << film.naziv << " (" << film.godinaIzdanja << "), ";
    std::cout << film.trajanje / 60 << "h" << film.trajanje % 60;
    std::cout << std::endl;
}

void skratiFilm(Film &film){
    film.trajanje = 60;
}