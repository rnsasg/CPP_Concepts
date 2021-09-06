#include <iostream>
using namespace std;

class Base
{
	public:
		void display();
};

void Base::display()
{
	cout<<"Base class display()"<<endl;
}

class Derived: public Base 
{
	public:	
		void display();
};

void Derived::display()
{
	cout<<"Derived class display()"<<endl;
}
int main(int argc,char *argv[])
{
	Base *bptr = new Base();
	bptr->display();

	Derived *dptr = new Derived();
	dptr->display();

	bptr = new Derived();

	bptr->display();
	return 0;
}

