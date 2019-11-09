#include <iostream>

#define forever for(;;)

using std::cout;

int main(){
    int broj = 5;

    int i = 0;

    forever {
        cout << i++;
        if (i>4) break;
    }
}