// Napišite funckju koja će međusobno zamijeniti vrijednosti dvjema varijablama
// (swap). Varijable su deklarirane u main() funkciji.

void swap(int *a, int *b){
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}