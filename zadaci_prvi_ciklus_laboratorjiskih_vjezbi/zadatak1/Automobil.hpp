#include <string>

using std::string;

struct Specifikacije {
    int maksimalnaBrzina;
    int zapremninaMotora;
    int snagaMotora;
    string gorivo;
};

class Automobil {
    public:
        Automobil();
        Automobil(string proizvodac, string model);
        Automobil(string proizvodac, string model, Specifikacije specs);
        Automobil(const Automobil &automobil);
        ~Automobil();
        void setProizvodac(string proizvodac);
        const string getProizvodac();
        void setModel(string model );
        const string getModel();
        void setSpecifikacije(int mamaksimalnaBrzinak, int zapremninaMotora, int snagaMotora,  string gorivo);
        const Specifikacije getSpecifikacije();
        Automobil operator=(const Automobil automobil);
        void operator==(const Automobil automobil);
        const double pretvorbaBrzine();
        const double pretvorbaSnage();
        const void prikazi();
    private:
        string *proizvodac = nullptr;
        string model;
        Specifikacije specs;
};