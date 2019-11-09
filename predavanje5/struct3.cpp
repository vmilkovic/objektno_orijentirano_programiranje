struct Tocka {
    int x;
    int y;
};

Tocka napraviTocku(int x, int y){
    return { x, y };
};

int main(){
    Tocka tocka1 = {2,3};
    Tocka tocka2 = {3,4};
    Tocka tocka3 = napraviTocku(2,3);
}