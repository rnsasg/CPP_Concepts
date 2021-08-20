/* Two parameter declarations that differ only in their default arguments are equivalent.
 * For example, following program fails in compilation with error “redefinition of `int f(int, int)’ “ */

#include <iostream>
using namespace std;

int f ( int x , int y )
{
	return (x+10);
}

int f( int x , int y = 10)
{
	return (x+y);
}

int main(void)
{
		
        return 0;
}

/* Output:
 *
 * [root@narayan overloading]# g++ FO6.cpp
 * FO6.cpp: In function ‘int f(int, int)’:
 * FO6.cpp:12:5: error: redefinition of ‘int f(int, int)’
 *  int f( int x , int y = 10)
 *       ^
 *       FO6.cpp:7:5: error: ‘int f(int, int)’ previously defined here
 *        int f ( int x , int y )
 */
