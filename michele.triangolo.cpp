#include <iostream>
using namespace std;

int main()
{
	
float base=0;
float altezza=0;
float area=0;

cout << "inserisci base del triangolo: ";
cin >> base;
cout << "inseisci altezza del triangolo: ";
cin >> altezza;

area=(base*altezza)/2;
cout << "l'area del triangolo e\': " << area;

return 0;
}
