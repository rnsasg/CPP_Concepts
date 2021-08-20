/* C++ allows functions to be overloaded on the basis of const-ness of parameters 
 * only if the const parameter is a reference or a pointer. That is why the 
 * program 1 failed in compilation, but the program 2 worked fine.
 * This rule actually makes sense. 
 * In program 1, the parameter ‘i’ is passed by value, so ‘i’ in fun() is a copy of ‘i’ in main().
 * Hence fun() cannot modify ‘i’ of main(). Therefore, it doesn’t matter whether ‘i’ is received 
 * as a const parameter or normal parameter. When we pass by reference or pointer,
 * we can modify the value referred or pointed, so we can have two versions of a function,
 * one which can modify the referred or pointed value, other which can not. */



#include <iostream>
using namespace std;

// Program-1 : Non-working example 

/*void fun( const int i)
{
	cout<<"void fun( const int i)"<<endl;
}

void fun( int i)
{
	cout<<"void fun( int i)"<<endl;
}

int main(void)
{
	const int i=10;
	fun(i);		
        return 0;
}*/

/* Output I :
 * FO8.cpp: In function ‘void fun(int)’:
 * FO8.cpp:11:6: error: redefinition of ‘void fun(int)’
 *  void fun( int i)
 *        ^
 *        FO8.cpp:6:6: error: ‘void fun(int)’ previously defined here
 *         void fun( const int i)
 */


// Porgram-2 : Working example

void fun( char *str)
{
	cout<<"In void fun( char *str) : "<< str <<endl;
}

void fun(const char *str)
{
	cout<<"In void fun(const char *str) : "<< str <<endl;
}

int main(void)
{
	//const char *str="Narayan";
	char *str="Narayan";
	fun(str);
	return 0;
}

/* Output II:
 * [root@narayan overloading]# ./a.out
 * In void fun(const char *str) : Narayan
 *
 * Output III:
 *
 * [root@narayan overloading]# ./a.out
 * In void fun( char *str) : Narayan
 *
 * /
