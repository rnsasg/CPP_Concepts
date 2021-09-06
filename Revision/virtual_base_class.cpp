#include <iostream>
using namespace std;

class A
{
	public :
		void A_display()
		{
			cout<<"A_display()"<<endl;
		}
};

class B : virtual public A
{
	public:
		void B_display()
		{
			cout<<"B_display()"<<endl;
		}
};

class C : public virtual A
{
	public:
		void C_display()
		{
			cout<<"C_display()"<<endl;		
		}
};

class D : public B , public C
{
	public:
		void D_display()
		{
			cout<<"D_display()"<<endl;
		}	
};

int main()
{
	D d;
	d.A_display();
	return 0;	
}


/* ************************************* Before Virutal Class *************************************
 * [root@narayan Revision]# g++ virtual_base_class.cpp
 * virtual_base_class.cpp:30:7: warning: direct base ‘B’ inaccessible in ‘D’ due to ambiguity [enabled by default]
 *  class D : public B , public C
 *         ^
 *         virtual_base_class.cpp: In function ‘int main()’:
 *         virtual_base_class.cpp:42:4: error: request for member ‘A_display’ is ambiguous
 *           d.A_display();
 *               ^
 *               virtual_base_class.cpp:6:8: note: candidates are: void A::A_display()
 *                  void A_display()
 *                          ^
 *                          virtual_base_class.cpp:6:8: note:                 void A::A_display()
 */
