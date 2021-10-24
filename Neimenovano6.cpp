#include<iostream>
using namespace std;
int main ()
	{
	
	float sat,minuta,sekunda;
	
	cout<<"unesite sate: "<<endl;
	cin>>sat;
	
	cout<<"unesite minute: "<<endl;
	cin>>minuta;
	

	
	if( minuta<30)

	
	{
		if(minuta==30)
		cout<<"pola"<<sat<<endl;
		
	 } 
	 {
	 	if(sat==24 || minuta==0)
	 	cout<<"ponoc."<<endl;
	 	
	 }
	 
	 cout<<sat && minuta<<endl;
		 return 0; 
	}
	

	
	

