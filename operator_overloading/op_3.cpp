/*  Conversion Operator: We can also write conversion operators that can be used to convert one type to another type.*/

#include <iostream>
using namespace std;

class Fraction
{
	private :
		int num ,den;
	public:
		Fraction( int n, int d) { num=n; den=d; }

		Fraction() { }

		operator float() const 
		{
			return float(num) / float(den);
		}
	
};

int main(void)
{
	Fraction f(2,5);
	float val=f;
	cout<<val << endl;		
        return 0;
}

/* Output 
 * [root@narayan operator_overloading]# ./a.out
 * 0.4
 */

