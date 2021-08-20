/* Parameter declarations that differ only in the presence or absence of const and/or volatile are equivalent.
 * That is, the const and volatile type-specifiers for each parameter type are ignored 
 * when determining which function is being declared, defined, or called. 
 * For example, following program fails in compilation with error “redefinition of `int f(int)’ “ */

#include <iostream>
using namespace std;

int f ( int x )
{
	return (x+10);
}

int f ( const int x )
{
	return (x+10);
}
int main(void)
{
		
        return 0;
}

/* Output :
 *
 * [root@narayan overloading]# g++ FO5.cpp
 * FO5.cpp: In function ‘int f(int)’:
 * FO5.cpp:14:5: error: redefinition of ‘int f(int)’
 *  int f ( const int x )
 *       ^
 *       FO5.cpp:9:5: error: ‘int f(int)’ previously defined here
 *        int f ( int x )
 */



