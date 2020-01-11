#include <iostream>
#include "WebStranica.hpp"

int main(){
    WebStranica WebStranica1;
    WebStranica1.info();

    WebStranica WebStranica2("www.vub.hr");
    WebStranica2.setUcitano(true);
    WebStranica2.info();

    if(WebStranica1 == WebStranica2){
        std::cout << "WebStranica1 i WebStranica2 su iste." << std::endl;
    } else {
        std::cout << "WebStranica1 i WebStranica2 nisu iste." << std::endl;
    }
    WebStranica WebStranica3("www.google.com", 443);
    WebStranica3.setUcitano(true);
    WebStranica3.info();
}