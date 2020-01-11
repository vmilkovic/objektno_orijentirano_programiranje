class Osoba {
    public:
        int netoPlaca;
};

class Prijatelj : public Osoba {
    private:
        using Osoba::netoPlaca;
    public:
        int getPlaca() { return netoPlaca; }
};

int main(){
    Prijatelj stipe;
    stipe.getPlaca();
}