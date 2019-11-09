struct Tocka {
    int x;
    int y;
};

/* Tocka sredina(int x1, int y1, int x2, int y2){
    Tocka rez;
    rez = { (x1 + x2) / 2, (y1 + y2 ) / 2 };
    return rez;
} */ // NE VALJA

Tocka sredina(Tocka t1, Tocka t2){
    Tocka rez;
    rez = { (t1.x + t2.x) / 2, (t1.y + t2.y) / 2 };
    return rez;
}

int main(){
    Tocka tocka1 = {2,3};
    Tocka tocka2 = {3,4};
    // Tocka tocka3 = sredina(tocka1.x, tocka1.y, tocka2.x, tocka2.y);
    Tocka tocka3 = sredina(tocka1, tocka2);
}

