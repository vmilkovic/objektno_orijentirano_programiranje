class KompleksniBroj {
    public:
        void setRealni(double realni);
        void setImaginarni(double imaginarni);
        double getRealni();
        double getImaginarni();
        double izracunajApsolutnuVrijednost();
        void prikazi();
        void zbrojiKompleksniBroj(KompleksniBroj broj);
    private:
        double realni;
        double imaginarni;
};