#include <iostream>
using namespace std;

/*  Function declarations that differ only in the return type. For example, the following program fails in compilation. */

int foo()
{
	return 10;
}

char foo()
{
	return 'a';
}
int main(void)
{
	char x = foo();
	return 0;	
}

/* Output :
 *
 * [root@narayan overloading]# g++  FO1.cpp
 * FO1.cpp: In function ‘char foo()’:
 * FO1.cpp:11:10: error: new declaration ‘char foo()’
 *  char foo()
 *            ^
 *            FO1.cpp:6:5: error: ambiguates old declaration ‘int foo()’
 *             int foo() */
