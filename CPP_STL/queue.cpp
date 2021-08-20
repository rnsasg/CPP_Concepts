#include <iostream>
#include <queue>

using namespace std;

int main()
{
	
	queue<int> q;

	q.push(10);
	q.push(13);
	q.push(15);
	q.push(20);

	q.pop();

	cout<<" Queue Front "<<q.front()<<endl;
	cout<<" Queue Rear  "<<q.back()<<endl;
	return 0;
}
