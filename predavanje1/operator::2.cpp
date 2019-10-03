#include <iostream>

using namespace std;
int n = 0;
int main()
{
	int n = 1;
    if (true)
    {
        int n = 2;
        cout << n << endl;
        cout << ::n << endl;
    }
    cout << n << endl;
    cout << ::n << endl;
}