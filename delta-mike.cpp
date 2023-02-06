#include <iostream>
#include <cmath>
using namespace std;

void delta(double a, double b, double c)
{
	
double esp=2;
double delt;
delt = pow(b,esp) -4*(a*c);
cout<<"il valore del delta e': "<<delt;
}
int main()
{
	double a;
	double b;
	double c;
	double delt;
	double esp=2;
	
	
	
	
	cout<<"inserisci i tre valori per calcolare il delta"<<endl<<endl;
	cout<<"inserisci a: ";
	cin>>a;
	cout<<"inserisci b: ";
	cin>>b;
	cout<<"inserisci c: ";
	cin>>c;
	cout<<endl;
	
	
	delta(a ,b ,c);
	
	return 0;
}
