/*
	Name: Michele Pesce
	Copyright: Colamonico Chiarulli
	Author: Michele Pesce
	Date: 3/10/22 11:43
	Description: Orario
*/
//1. includo le librerie

#include<iostream>
using namespace std;

//2. inizio il blocco main

int main()
{
	//3.4 dichiaro e inizializzo le variabili
	int ore=0;
	int min=0;
	int mintot=0;
	//4. input
	cout<<"inserisci le ore:";
	cin>>ore;
	cout<<"insrisci i minuti:";
	cin>>min;
	//5.logica operazioni e algoritmo
	mintot=(ore*60)+min;
	//6.output
	cout<<"l'orario in minuti totali e\':"<<mintot;
	//7.ritorno al sistema operativo
	return 0;
	//8.fine del programma
	}
