#include <iostream>
using namespace std;


int main()
{
	int a=0,b=10,c=0;
	try
	{
		if( a == 0 )
			throw(a);
		c =(int) b/a;
	}
	catch(int c)
	{
		cout<<"Exception thrown";
		return 0;	
	}		
	return 0;
}
