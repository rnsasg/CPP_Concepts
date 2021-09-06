#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const char *filename="input_output.txt";

int main(int argc,char *argv[])
{
	float height[4]={175.5,153.0,167.25,160.70};
	string str;
	ofstream outfile;
	outfile.open(filename);
	outfile<<"Roushan Narayan Sah";
	outfile.close();

	for(int i=0;i<4;i++)
		height[i]=0;

	ifstream infile;
	infile.open(filename);
	infile>>str;
	cout<<str;
	infile.close();
	
	return 0;
}

