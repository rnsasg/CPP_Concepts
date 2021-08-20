#include <iostream>
#include <map>

using namespace std;

int main(int argc, char *argv[])
{

	map<int,int> marks;

	marks.insert({10,12});		
	marks.insert({11,15});
	marks.insert({12,16});

	map<int,int>::iterator it;

	for(it=marks.begin();it!=marks.end(); ++it)
		cout<< it->first <<" "<< it->second <<endl;
	return 0;
}
