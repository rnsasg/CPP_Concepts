#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const char *filename="input_output.txt";

int main(int argc,char *argv[])
{
	float height[4]={175.5,153.0,167.25,160.70};

	ofstream outfile;
	outfile.open(filename);
	outfile.write((char*)&height,sizeof(height));
	outfile.close();

	for(int i=0;i<4;i++)
		height[i]=0;

	ifstream infile;
	infile.open(filename);
	infile.read((char*)&height,sizeof(height));

	for(int i=0;i<4;i++)
	{
		cout.setf(ios::showpoint);
		cout<<setw(10)<<setprecision(2)<<height[i];
	}
	infile.close();
	
	return 0;
}

