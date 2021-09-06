#include <iostream>
using namespace std;

class Complex
{
  public:
	int real;
	int img;
	Complex(){}
	Complex(int r,int i)
	{
		real = r;
		img = i;
	}
	Complex(Complex &c)
	{
		real=c.real;
		img=c.img;
	}
	
	Complex operator+(Complex &c);
	void display(void);
};

void Complex::display()
{
	cout<< real << " + j" << img <<endl;
}
Complex Complex::operator+(Complex &c)
{
		Complex temp;
		temp.real = real + c.real;
		temp.img  = img  + c.img;
		return temp; 
}

int main()
{
	Complex c1,c2,c3;
	
	c1 = Complex(2.5,3.5);
	c2 = Complex(1.6,2.7);
	c3 = c1 + c2;

	cout<< "C1 = ";c1.display();
	cout<< "C2 = ";c2.display();
	cout<< "C3 = ";c3.display();	
	return 0;
}

