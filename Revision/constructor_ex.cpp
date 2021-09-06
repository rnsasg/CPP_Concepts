#include <iostream>
using namespace std;

class Base
{
   public:
	int a;
	Base(){ }
	Base(int i)
	{
		a=i;
	}
	Base(Base &b)
	{
		a=b.a;
	}
};

int main(int argc,char *argv[])
{

	Base b1(10);
	Base b2(20);
	Base b3;
	cout<<"Base class B1 i="<<b1.a<<endl;
	
	cout<<"Base class B2 i="<<b2.a<<endl;
	
	b3=b2;
	
	cout<<"Base class B3 i="<<b3.a<<endl;

	return 0;
}

