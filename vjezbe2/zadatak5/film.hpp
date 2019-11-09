#pragma once

#include <string>
// u .hpp datoteci ne koristimo using

struct Film {
    std::string naziv;
    int godinaIzdanja;
    int trajanje;
};

void prikaziFilm(const Film &film);
void skratiFilm(Film &film);