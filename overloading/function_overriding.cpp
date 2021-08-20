/*
 * 				Function Overloading VS Function Overriding:

	A. Inheritance: Overriding of functions occurs when one class is inherited from another class.
	   Overloading can occur without inheritance.

	B. Function Signature: Overloaded functions must differ in function signature ie either number
	   of parameters or type of parameters should differ. In overriding, function signatures must be same.

	C. Scope of functions: Overridden functions are in different scopes; whereas overloaded functions are in same scope.

	D. Behavior of functions: Overriding is needed when derived class function has to do some added or different job 
	   than the base class function. Overloading is used to have same name functions which behave differently 
	   depending upon parameters passed to them. 
*/

#include <iostream>
using namespace std;

/* It is the redefinition of base class function in its derived class with same signature i.e return type and parameters. */

class BaseClass {
	public:
		virtual void display()
		{
			cout<<"In BaseClass: display() method"<<endl;
		}

		void show()
		{
			cout<<"In BaseClass:show() method"<<endl;
		}
};

class DerivedClass : public BaseClass {

	public : 
		void display()
		{
			cout<<"In DerivedClass: display() method"<<endl;
		}
};

int main( void )
{
	DerivedClass dr;
	BaseClass &bs=dr;
	
	bs.display();

	dr.show();
	
	return 0;
}

/* Output :
 * [root@narayan overloading]# ./a.out
 * In DerivedClass: display() method
 * In BaseClass:show() method
 */
