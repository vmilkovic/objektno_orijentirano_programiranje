#include "WebStranica.hpp"

class WebPreglednik {
    public:
        WebPreglednik(std::string ime, std::string url);
        WebPreglednik(std::string ime, std::string url, std::string incognitoUrl);
        WebPreglednik(const WebPreglednik &webPreglednik);
        ~WebPreglednik();

        void setOtvorenaStranica(WebStranica webStranica);
        void setIncogniteStranica(WebStranica *webStranica);
        WebStranica& getStranicaRef();

        WebPreglednik& operator=(const WebPreglednik &webPreglednik);
        void info() const;
    private:
        std::string ime;
        std::string otvorenaStranica;
        std::string incognitoStranica;
};