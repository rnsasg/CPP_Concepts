#include <iostream>
using namespace std;

template<class T>
void swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a=10,b=15;
	cout<<"Before swapping A: "<<a<<"B: "<<b;
	swap(a,b);
	cout<<"After swapping B: "<<a<<"B: "<<b;

	return 0;
}

