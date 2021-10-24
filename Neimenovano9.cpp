#include<iostream>
using namespace std;
int main ()

{
int a,b,c;
   cout<<"unesite vrijednosti a,b,c: "<<endl;
   
cin>>a>>b>>c;


if(a>c && a>b)
{
	
	if(b>a && b>c )
	 cout<<"veci je broj: "<< b <<endl;
	 else 
	 cout<<"manji je broj: "<< c<< endl;
	 
}
	 else 
	 cout<<"manje je broj: "<<a<<endl;
	 
	return 0;
	
	
}
