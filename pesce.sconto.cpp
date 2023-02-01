/*
    Name:michele pesce
    Copyright:colamonico charulli
    Author:michele pesce
    Date: 28/09/22 09:39
    Description:in input il prezzo di un prodotto e la percentuale di sconto, dare in output il
prezzo scontato.
*/


//1. includo le librerie
#include <iostream>
using namespace std;


//2. inizio il blocco main
int main()
{

//3. dichiaro e inizializzo le variabili
float prezzo=0;
float sconto=0;
float ris=0;
float perc=0;

//4. input
cout<<"inserisci il prezzo";
cin>>prezzo;
cout<<"inserisci lo sconto da applicare";
cin>>sconto;
//5. logica - operazioni - algoritmo
perc=100-sconto;
ris=prezzo*perc/100;

//6. output
cout<<"il prezzo scontato e\'"<<ris;

//7. ritorno al sistema operativo
return 0;

//8. fine del programma
	
}
