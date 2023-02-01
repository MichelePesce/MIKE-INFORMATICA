/*
	Name: Michele Pesce
	Copyright: Colamonico Chiarulli
	Author: Michele Pesce
	Date: 30/09/22 11:36
	Description: moltiplicazione di un numero per 3 e sottrazione del prodotto per 5
*/
//1. includo le librerie

#include<iostream>
using namespace std;

//2. inizio il blocco main

int main()
{
	//3.4 dichiaro e inizializzo le variabili
	
	int n1=0;
	int ris=0;
	
	//5.6 input,operazioni, logica e algoritmi
	
	cout<<"inserisci il numero";
	cin>>n1;
	
	ris=(n1*3)-5;
	
	//7. output
	
	cout<<"il risultato dell'operazione e\'"<<ris;
	
	//8. ritorno al sistema operativo
	
	return 0;
	
	//9. fine del programma
	
}
