#include <iostream>
using namespace std;
int main()
{
int i;
int scelta;
int vettore[i];
int lunghezza;
int np;
do{
		cout<<"per favore inserisci una delle opzioni: \n";
		
	cout<<"1: inserisci il vettore" << endl;
	cout<<"2: stampi a video il vettore" << endl;
	cout<<"3: conta quanti numeri pari ci sono nel vettore e stampa il risultato" << endl;
	cout<<"4: conta quanti numeri dispari ci sono nel vettore e stampa il risultato" << endl;
	cout<<"5:conta quanti numeri ci sono maggiori di un numero dato in input e stampa il risultato"<<endl;
	cout<<"6:esci dal programma"<<endl;

cout<<"scelgli una delle opzioni (1,2,3,4,5 or 6): ";
	cin>>scelta;
	
	switch(scelta) {
		
	case 1:	
       cout<<"inserisci lunghezza del vettore: "<<endl;
	    cin>>lunghezza;

	 	for(i=0;i<lunghezza;i++){
		 
	 	cout<<"inserisci il prossimo numero: "<<endl;
	 	cin>>vettore[i];
		 cout<<endl;	
        }
break;

    case 2: cout<<"i numeri del vettore sono: "<<endl;
	for(i=0;i<lunghezza;i++) {
		cout<<vettore[i]<<endl;
	}
break;
 
case 3: cout<<"i numeri pari nel tuo vettore sono: " <<vettore[i] <<endl;
for(i=0;i<lunghezza;i++){
if(vettore[i]%2==0)
np=np+1;
}
cout<<np;
break;

}








  } while (scelta !=4);
			
	return 0;	
 } 
		

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


