#include <iostream>
using namespace std;
int main()
{
int n=0;
int esp=0;
int cont=0;
int ris=1;
cout<<"inserisci il numero";
cin>>n;
cout<<"inserisci esponente";
cin>>esp;
while(cont<esp)
{
ris=ris*n;
cont=cont+1;
}
cout<<"il risultato e'"<<ris;
return 0;

}
