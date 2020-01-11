#include "WebPreglednik.hpp"

int main(){
    WebPreglednik firefox1("Firefox", "www.linux.org");
    firefox1.info();

    WebPreglednik firefox2("Firefox", "www.linux.org", "www.deepweb.com");
    firefox2.info();

    WebPreglednik kopija = firefox2;
    kopija.info();

    kopija.setIncogniteStranica(new WebStranica(("www.test.com")));
    kopija.info();

    kopija = firefox2;
    kopija.info();

    WebStranica &stranica = firefox2.getStranicaRef();
    stranica.info();
    stranica.setAdresa({"www.noviurl.com", 443});
    stranica.info();

    firefox2.info();
}