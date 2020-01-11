#include <string>

#define DEFAULT_URL "www.vub.hr"
#define DEFAULT_PORT (80)

struct Adresa {
    std::string url;
    int port;
};

class WebStranica {
    public:
        WebStranica();
        WebStranica(std::string url, int port = DEFAULT_PORT);

        Adresa getAdresa() const;
        void setAdresa(Adresa adresa);

        bool getUcitano() const;
        void setUcitano(bool ucitano);

        bool operator==(const WebStranica &webStranica) const;
        void info() const;
    private:
        Adresa adresa;
        bool ucitano;
};