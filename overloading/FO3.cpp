#include <iostream>
using namespace std;

/* Parameter declarations that differ only in a pointer * versus an array [] are equivalent. 
 * That is, the array declaration is adjusted to become a pointer declaration.
 * Only the second and subsequent array dimensions are significant in parameter types.
 * For example, following two function declarations are equivalent. */

int fun( int *ptr )
{
	cout<<"Inside int fun( int *ptr ) ";
}

int fun( int ptr[] )
{
	cout<<"Inside int fun( int ptr[] )";
}

int main(void)
{
	int num;
	fun(&num);	
        return 0;
}
/* Output : 
 *
 * FO3.cpp: In function ‘int fun(int*)’:
 * FO3.cpp:14:5: error: redefinition of ‘int fun(int*)’
 *  int fun( int ptr[] )
 *       ^
 *       FO3.cpp:9:5: error: ‘int fun(int*)’ previously defined here
 *        int fun( int *ptr ) */

