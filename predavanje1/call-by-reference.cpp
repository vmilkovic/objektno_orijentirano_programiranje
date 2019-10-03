#include <iostream>

using namespace std;

void call_by_reference(int * a)
{
    *a += 10;
}

int main()
{
    int b = 10;
    cout << "B prije poziva funkcije: " << b << endl;
    call_by_reference(&b);
    cout << "B nakon poziva funkcije: " << b << endl;
}