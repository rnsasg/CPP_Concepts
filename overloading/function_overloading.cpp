#include <iostream>

using namespace std;

int sum( int a , int b )
{
	cout<<" In int sum( int a , int b )"<<endl;
	return (a + b);
}

int sum( int a , int b , int c)
{
	cout<<"int sum( int a , int b , int c)"<<endl;
	return (a + b + c );
}

int main(void)
{
	cout<<sum(1,2)<<" "<<sum(1,2,3);
	return 0;
}

