#include <iostream>
using namespace std;
int main()
{
	int i;
	i=10;
	int vettore[i];
	
	for(i=0;i<10;i++) {
	cout<<"inserisci il prossimo numero:" <<endl;
	cin>>vettore[i];

	}
	
	for(i=0;i<10;i++) {
		cout<<"il valore del vettore e\'"<<vettore[i] <<endl;

	}
	return 0;
	
}
