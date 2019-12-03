#include <iostream>
#include "Automobil.hpp"

#define PROIZVODAC "Fiat"
#define MODEL "Punto Evo"
#define SPECS { 172, 1248, 63, "benzin" }

Automobil::Automobil() : Automobil::Automobil( PROIZVODAC, MODEL, SPECS ){};

Automobil::Automobil( string proizvodac, string model ) : Automobil::Automobil( proizvodac, model, SPECS ){};

Automobil::Automobil( string proizvodac, string model, Specifikacije specs ){
    setProizvodac( proizvodac );
    setModel( model );
    setSpecifikacije( specs.maksimalnaBrzina, specs.zapremninaMotora, specs.snagaMotora, specs.gorivo );
};

Automobil::Automobil(const Automobil &automobil):
    Automobil::Automobil(*automobil.proizvodac, automobil.model, automobil.specs){};

Automobil::~Automobil(){
    delete proizvodac;
}

void Automobil::setProizvodac(string proizvodac){
    this->proizvodac = new string(proizvodac);
}

const string Automobil::getProizvodac(){
    return *proizvodac;
}

void Automobil::setModel(string model){
    this->model = model;
}

const string Automobil::getModel(){
    return this->model;
}

void Automobil::setSpecifikacije(int mamaksimalnaBrzinak, int zapremninaMotora, int snagaMotora,  string gorivo){
    Specifikacije specks;
    specks = { mamaksimalnaBrzinak, zapremninaMotora, snagaMotora, gorivo };
    this->specs = specks;
}

const Specifikacije Automobil::getSpecifikacije(){
    return this->specs;
}

Automobil Automobil::operator=(const Automobil automobil){
    this->proizvodac = automobil.proizvodac;
    this->model = automobil.model;
    this->specs = automobil.specs;
    return *this;
}

void Automobil::operator==(Automobil automobil){
    Automobil newAutomobil;
    if( newAutomobil.getModel() == automobil.getModel() ){
        std::cout << "isti model" << std::endl;
    } else {
        std::cout << "nije isti model" << std::endl;
    }
};

const double Automobil::pretvorbaBrzine(){
    return 0.621371 * this->getSpecifikacije().maksimalnaBrzina;
}

const double Automobil::pretvorbaSnage(){
    return this->getSpecifikacije().snagaMotora * 1.341;
}

const void Automobil::prikazi(){

    Specifikacije specks = this->getSpecifikacije();

    std::cout << "Proizvodac: " << this->getProizvodac() << std::endl;
    std::cout << "Model: " << this->getModel() << std::endl;
    std::cout << "Specifikacije: " << std::endl;
    std::cout << "- Maksimalna brzina = " << specks.maksimalnaBrzina << " km/h (" << this->pretvorbaBrzine() << " mph)" << std::endl;
    std::cout << "- Zapremnina motora = " << specks.zapremninaMotora << " ccm" << std::endl;
    std::cout << "- Snaga motora = " << specks.snagaMotora << " kW (" << this->pretvorbaSnage() << " hp)" << std::endl;
    std::cout << "- Gorivo = " << specks.gorivo << std::endl;

};