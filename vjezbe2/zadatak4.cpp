// Izradite strukturu Filma koji će sadržavati tri člana: naziv filma, godina izranja i trajanje (u minutama).
// Izradite funkciju prikaziFilm koja će za argument tipa Film prikazati u obliku: Joker (2019), 2h2m
// Poboljšajte funkciju tado da koristite reference (sa svim onim prijedlozima oko korištenja referenci koje smo spominjali na predavanju).
// Izradite funkciju skratiFilm koja će prosljeđenom filmu skratiti trajanje na 60min.
// U glavnoj funkciji definirajte strukturu i isprobajte implemenirane funkcije.

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct Film {
    string naziv;
    int godinaIzdanja;
    int trajanje;
};

void prikaziFilm(const Film &film){
    cout << film.naziv << " (" << film.godinaIzdanja << "), ";
    cout << film.trajanje / 60 << "h" << film.trajanje % 60;
    cout << endl;
}

void skratiFilm(Film &film){
    film.trajanje = 60;
}

int main(){
    Film noviFilm = { "Joker", 2019, 122 };
    prikaziFilm(noviFilm);
    skratiFilm(noviFilm);
    prikaziFilm(noviFilm);
}