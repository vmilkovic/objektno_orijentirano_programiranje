#include <iostream>
#include <cmath>
#include "KompleksniBroj.hpp"

void KompleksniBroj::setRealni(double realni){
    this->realni = realni;
}
void KompleksniBroj::setImaginarni(double imaginarni){
    this->imaginarni = imaginarni;
}
double KompleksniBroj::getRealni(){
    return realni;
}
double KompleksniBroj::getImaginarni(){
    return imaginarni;
}
double KompleksniBroj::izracunajApsolutnuVrijednost(){
    return sqrt(pow(realni, 2) + pow(imaginarni, 2));
}
void KompleksniBroj::prikazi(){
    std::cout << "Re: " << realni << " " << "Im: " << imaginarni << std::endl;
}
void KompleksniBroj::zbrojiKompleksniBroj(KompleksniBroj broj){
    double realniBroj       = broj.getRealni();
    double realniImaginarni = broj.getImaginarni();
    realni     = realniBroj + realni;
    imaginarni = realniImaginarni + imaginarni;
}