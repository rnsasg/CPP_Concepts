#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc,char *argv[])
{
	vector<int> arr;

	arr.push_back(10);
	arr.push_back(3);
	arr.push_back(14);

	vector<int>::iterator it;

	cout<< "Using an itreator"<<endl;
	for( it=arr.begin();it != arr.end(); ++it)
	{
		cout<< *it<<" ";
	}

	arr.pop_back();
	arr.push_back(15);

	cout<<endl<<"Using an simple loop"<<endl;

	for(int i=0;i<arr.size();i++)
		cout<< arr[i] <<" ";

	sort(arr.begin(),arr.end());

	cout<<" After sorting "<<endl;
	for(it=arr.begin(); it!=arr.end(); ++it )
		cout<< *it <<" ";
	arr.clear();

	if( arr.empty() )
	{
		cout<<endl<<"Array is empty";
	}
		
	return 0;
}
