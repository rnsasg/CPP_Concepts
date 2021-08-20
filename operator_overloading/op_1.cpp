/*
 * In C++, we can make operators to work for user defined classes.
 * This means C++ has the ability to provide the operators with a 
 * special meaning for a data type, this ability is known as 
 * operator overloading.For example, we can overload an operator ‘+’
 * in a class like String so that we can concatenate two strings by just using +.
 */

#include <iostream>
using namespace std;

class Complex {
	private:
		int real;
		int img;
	public :
		Complex(int r,int i)
		{
			real=r;
			img=i;
		}
		Complex() {} 
	Complex operator + ( Complex const &obj )
	{
		Complex res;
		res.real = real + obj.real;
		res.img  = real + obj.img;
		return res;
	}
	
	void print()
	{
		cout<< real << " + i "<< img << endl ;
	}
};


int main(void)
{
	Complex c1(10,5) , c2(2,4);

	Complex c3 = c1 + c2;
	
	c3.print();
		
        return 0;
}

/* Output :
 *
 * [root@narayan operator_overloading]# ./a.out
 * 12 + i 14
 */
