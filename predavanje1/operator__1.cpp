#include <iostream>

using namespace std;
int x = 5;

int main()
{
	int x = 10;
	cout << "Vrijednost globalne je " << ::x;
	cout << "\nVrijednost lokalne je " << x;
}