#include <iostream>
using namespace std;

template <class T >
void bubble_sort(T arr[],int n)
{
	T temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if( arr[j] > arr[j+1] )
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main(int argc,char* argv[])
{

	int arr[]={1,10,14,8,7};
	bubble_sort(arr,5);	
	return 0;
}

