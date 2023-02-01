#include <iostream>
using namespace std;
int main()
{
	int i;
	int scelta;
	i=3;
	int vettore[i];
	
	do{
		cout<<"per favore inserisci una delle opzioni: \n";
		
	cout<<"1: inserisci il vettore" << endl;
	cout<<"2: stampi a video il vettore" << endl;
	cout<<"3: stampi il vettore ordinato al contario" << endl;
	cout<<"4: esci dal programma" << endl;
	
	cout<<"scelgli una delle opzioni (1,2,3 or 4): ";
	cin>>scelta;
	
	
	
	switch (scelta){
		case 1:
		cout<<"inserisci numero del vettore:";
		cin>>vettore[scelta];
		
		case 2:
		for(i=0;i<3;i++) {
		cout<<"il valore del vettore e\'"<<vettore[i] <<endl;
	}
		case 3:
		for(i=0;i<3;i++) {
		cout<<"il valore del vettore al contario e\'"<<vettore[3] << vettore[2] <<vettore[1] << endl;

	}	
		case 4: 
		cout<<"grazie di aver usufruito del nostro servizio, buonagiornata";
		break;
		
		default:
		cout<<"la tua selezione è compresa tra 1  e 4";
		break;
		
	}
	
	
	}while(scelta!=4);
	
	return 0;
		
	
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

