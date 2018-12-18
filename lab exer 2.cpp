#include <iostream>
using namespace std;

int main()
{
	int a, b, c; 
	
	cout<< "Enter two integers: ";
	cin>>b;
	cin>>c;
	
	int max = a; 

	if (b > max) 
	{ 
		max = b;
	} 

	if (c > max) 
	{ 
		max = c;
	}
    
    cout<<"The Larger number is:  "<<max<<endl;
    
	return 0;
}	
