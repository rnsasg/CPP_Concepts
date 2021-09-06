#include <iostream>
using namespace std;


class Employee
{
		int salary;
	public :
		string name;
		Employee()
		{
			salary = 0;
			eid = 0;
			name="";
		}
	protected:
		int eid;		
		
};

class Professor:public Employee
{
	public :
		string department;
	Professor()
	{
		department = "";
	}	
};

int main(int argc,char *argv[])
{
			
	return 0;
}
