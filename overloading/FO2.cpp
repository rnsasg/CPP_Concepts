#include <iostream>
using namespace std;

/*
Member function declarations with the same name and the name parameter-type-list cannot be overloaded 
if any of them is a static member function declaration. For example, following program fails in compilation.*/

class Test {
	static int fun(int i) {}
	int fun(int i) {}
};

int main(void)
{
	Test t;		
	return 0;
}


/* [root@narayan overloading]# g++ FO2.cpp
 * FO2.cpp:10:6: error: ‘int Test::fun(int)’ cannot be overloaded
 *   int fun(int i) {}
 *         ^
 *         FO2.cpp:9:13: error: with ‘static int Test::fun(int)’
 *           static int fun(int i) {} */
