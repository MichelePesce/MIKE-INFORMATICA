/*
	Name: Michele Pesce
	Copyright: Colamonico Chiarulli
	Author: Michele Pesce
	Date: 3/10/22 11:27
	Description: durata brano
*/
//1. includo le librerie

#include<iostream>
using namespace std;

//2. inizio il blocco main

int main()
{
	//3.4 dichiaro e inizializzo le variabili
	int min=0;
	int sec=0;
	int minsec=0;
	//4. input
	cout<<"inserisci i minuti del brano:";
	cin>>min;
	cout<<"inserisci i secondi del brano:";
	cin>>sec;
	//5.logica operazioni e algoritmo
	minsec=(min*60)+sec;
	//6. output
	cout<<"i secondi totali del brano sono:"<<minsec;
	//7.ritorno al sistema operativo	
	return 0;
	//8.fine del programma
	
	}
