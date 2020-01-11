#include <iostream>

int* stvoriVarijablu(int vrijednost){
    return new int(vrijednost);
}

int main(){
    int *p = nullptr;

    p = stvoriVarijablu(10);
    p = stvoriVarijablu(12);

    std::cout << *p;

}