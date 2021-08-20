/*
 * Operator functions are same as normal functions. The only differences are, name of an operator function
 * is always operator keyword followed by symbol of operator and operator functions are called when the
 * corresponding operator is used.
 */

#include <iostream>
using namespace std;

class Complex {
	private:
		int real,imag;
	public:
		Complex ( int r, int i)
		{
			real = r;
			imag = i;
		}
		
		Complex () {}

		friend Complex operator + ( Complex const &, Complex const &);
		void print()
                {
                        cout<< real <<" + i"<< imag <<endl;
                }

};

Complex operator + ( Complex const &c1, Complex const &c2)
{
	Complex res;
	res.real = c1.real + c2.real;
	res.imag = c1.imag + c2.imag;
	return res;

}

int main(void)
{
	Complex c1(10,5), c2(2,4);
	Complex c3 = c1 + c2;
	c3.print();
		
        return 0;
}

/* Output :
 *
 * [root@narayan operator_overloading]# ./a.out
 * 12 + i9
 */


