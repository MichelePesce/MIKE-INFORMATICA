#include <iostream>
using namespace std;
int main()
{
	
float num1=0;
float num2=0;
int scelta=0;


	do{
	cout<<endl;
	cout<<"per favore inserisci una delle opzioni: \n";
	cout<<"SCEGLI UNA DI QUESTE OPZIONI: \n ";
	cout<<"1:inserisci due numeri e fai la somma"<< endl;
	cout<<"2: inserisci due numeri e fai la sottrazione" << endl;
	cout<<"3: inserisci due numeri e fai la moltiplicazione" << endl;
	cout<<"4: inserisci due numeri e fai la divisone" << endl;
	cout<<"5: esci dal programma"<< endl;
cout<<endl;	
cin>>scelta;


switch (scelta){
		case 1:
		cout<<endl;
		cout<<"inserisci primo numero " <<endl;
		cin>>num1;
		cout<<"inserisci secondo numero "<<endl;
		cin>>num2;
		cout<<"la somma dei due numeri e\': "<<endl;
		cout<<num1+num2<<endl;
		
		break;
		
		
		case 2:
		cout<<endl;
		cout<<"inserisci primo numero"<< endl;
		cin>>num1;
		cout<<"inserisci secondo numero"<< endl;
		cin>>num2;
		cout<<"la differenza dei due numeri e\': "<< endl;
		cout<<num1-num2  <<endl;
	break; 
		
		
		
		case 3:
		cout<<endl;
		cout<<"inserisci primo numero"<< endl;
		cin>>num1;
		cout<<"inserisci secondo numero"<< endl;
		cin>>num2;
		cout<<"il prodotto dei due numeri e\': "<< endl;
		cout<<num1*num2 <<endl;
break;
	
		case 4: 
		cout<<endl;
		cout<<"inserisci primo numero"<< endl;
		cin>>num1;
		cout<<"inserisci secondo numero"<< endl;
		cin>>num2;
		cout<<"il quoziente dei due numeri e\': "<< endl;
		cout<<num1/num2 <<endl;
		break;
		
		
		
		case 5:
			cout<<endl;
			cout<<"grazie di aver usato il nostro programma, arrivederci"<<endl;
			break;
	}
	
	
	}while(scelta!=6);
	
	return 0;
		
	}
		
	
