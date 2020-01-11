#include <iostream>
#include "WebPreglednik.hpp"

WebPreglednik::WebPreglednik(std::string ime, std::string url)
    : ime(ime), otvorenaStranica(url), incognitoStranica(nullptr) {}

WebPreglednik::WebPreglednik(std::string ime, std::string url, std::string incognitoUrl)
    : ime(ime), otvorenaStranica(url) {
        incognitoStranica = new WebStranica(incognitoUrl);
}
WebPreglednik::WebPreglednik(const WebPreglednik &webPreglednik)
    : ime(webPreglednik.ime), otvorenaStranica(webPreglednik.otvorenaStranica){
        if(webPreglednik.incognitoStranica != nullptr){
            incognitoStranica = new WebStranica("www.google.com");
        } else {
            incognitoStranica = nullptr;
        }
}
WebPreglednik::~WebPreglednik(){
    if(incognitoStranica){
        delete incognitoStranica;
    }
}
void WebPreglednik::setOtvorenaStranica(WebStranica webStranica){
    otvorenaStranica = webStranica;
}

void WebPreglednik::setIncogniteStranica(WebStranica *webStranica){
    if(incognitoStranica){
        delete incognitoStranica;
    }
    incognitoStranica = webStranica;
}

WebStranica& WebPreglenik::getStranicaRef(){
    if(incognitoStranica){
        return *incognitoStranica;
    }
    return otvorenaStranica;
}
WebPreglenik& WebPreglenik::operator=(const WebPreglenik &webPreglenik){
    ime = webPreglednik.ime;
    otvorenaStranica = webPreglednik.otvorenaStranica;
    if(incognitoStranica){
        delete incognitoStranica;
        incognitoStranica = nullptr;
    }
    return *this;
}
void WebPreglednik::info() const {
    std::cout << ime << std::endl;
    std::cout << "Stranica: ";
    otvorenaStranica.info();
    std::cout << "Incognito: ";
    if(incognitoStranica){
        incognitoStranica->info();
    } else {
        std::cout << "nije otvorena" << std::endl;
    }
}