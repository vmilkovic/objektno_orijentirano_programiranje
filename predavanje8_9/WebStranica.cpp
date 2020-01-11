#include <iostream>
#include "WebStranica.hpp"

WebStranica::WebStranica() : WebStranica::WebStranica(DEFAULT_URL) { }

WebStranica::WebStranica(std::string url, int port) : ucitano(false) {
    setAdresa({ url, port });
}

Adresa WebStranica::getAdresa() const {
    return adresa;
}

void WebStranica::setAdresa(Adresa adresa){
    if(adresa.url != "" && adresa.port >= 0){
        this->adresa = adresa;
    }
}

bool WebStranica::getUcitano() const {
    return ucitano;
}

void WebStranica::setUcitano(bool ucintano){
    this->ucitano = ucintano;
}

bool WebStranica::operator==(const WebStranica &webStranica) const {
    return adresa.url == webStranica.adresa.url && adresa.port == webStranica.adresa.port;
}

void WebStranica::info() const {
    std::cout << adresa.url << ":" << adresa.port;
    if(ucitano){
        std::cout << " (ucitano)";
    } else {
        std::cout << " (nije ucitano)";
    }
    std::cout << std::endl;
}