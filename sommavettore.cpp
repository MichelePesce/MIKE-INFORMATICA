#include <iostream>
using namespace std;
int main()
{
	int i;
	i=4;
	int vettore[i];
	int m;
	m=4;
	vettore[m];
	int somma=0;
	vettore[somma];
	
	
	for(i=0;i<4;i++){
		
	cout<<"inserisci gli elementi del primo vettore: ";
	cin>>vettore[i];
    	}
	cout<<endl;	
		
		cout<<"i valori del primo vettore sono: "<<endl;
		for(i=0;i<4;i++){
			cout<< vettore[i]<<endl;
		}
		cout<<endl;
		
		
		for(m=0;m<4;m++){
		
	cout<<"inserisci gli elementi del secondo vettore: ";
	cin>>vettore[m];
    	}
	cout<<endl;	
		
		cout<<"i valori del secondo vettore sono: "<<endl;
		for(m=0;m<4;m++){
			cout<< vettore[m]<<endl;
		}
		cout<<endl;
		
		
		for(somma=0;somma<4;somma++){
		
	cout<<" la somma dei due vettore e' : "<<somma ;
somma=vettore[i]+vettore[m];
cout<<vettore[somma]<<endl;
    	}
	cout<<endl;	
		
		
		
		
		
		
		
		
		
		
		return 0;
	}
