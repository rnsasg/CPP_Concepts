#include <iostream>

using namespace std;

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
