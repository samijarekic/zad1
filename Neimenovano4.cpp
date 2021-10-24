#include<iostream>
using namespace std;
int main ()

{
    int a,b,c;
    
    cout<<"unesite brojeve a,b i c: "<<endl;
    
    cin>>a>>b>>c;
    
    if( a>b && b>c && c>a)
    {
    	if(b>c)
    	cout<<"manji broj je: "<<c<<endl;
    	{
    		if(c>a)
    		cout<<"manji broj je: "<<a<<endl;
    		{
    			if(a==b)
    			cout<<"brojevi su jednaki"<<endl;
    			{
    				
					if(b==c)
					cout<<"brojevi su jednaki"<<endl;
					{
						if(a==c)
						cout<<"brojevi su jednaki"<<endl;
					}
				
				}
		
			}
		}
		    
		cout<<" veci broj je: "<<a<<endl;
	}
	
	return 0;
	
	
}
