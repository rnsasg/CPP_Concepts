#include <iostream>
#include <stack>

using namespace std;
int main(void)
{
	stack<int> st;

	st.push(12);
	st.push(10);
	st.push(11);
	st.push(13);

	cout<<endl<<"Stack Size "<<st.size();

	st.pop();

	cout<<endl<<"top element :"<<st.top();

	return 0;
}
