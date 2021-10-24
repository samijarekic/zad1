#include<iostream>
using namespace std;
int main ()

{
    float a,b,c,d;
    
    cout<<"unesite ocijene: "<<endl;
    
    cin>>a>>b>>c>>d;
    
    d=a*b*c;
    
	if(a+b+c> 11)
    {
    	
    	cout<<"kovanice: "<<a*b*c<<endl;
    	
	}
	
	else
	cout<<" upola manje kovanica: "<<d/2<<endl;
	
	
	return 0;
	
	
}
