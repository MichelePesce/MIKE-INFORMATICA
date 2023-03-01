#include <iostream>
using namespace std;
bool bisestile(int anno)
{
	bool annob =false;
	
	if(anno%4==0 && anno%100!=0 || anno%100==0 && anno%400==0)
    {
	annob=true;
	cout<<endl;
	cout<<"l'anno e' bisestile";
   }
else
    {
	annob=false;
	cout<<endl;
	cout<<"l'anno non e' bisestile";
    }
return annob;
}
int main()
{
	int anno;
	cout<<"inserisci un anno a scelta: ";
	cin>>anno;
	bisestile(anno);
	return 0;
	
	
}


