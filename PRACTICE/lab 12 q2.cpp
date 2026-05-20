#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin("source.txt");
	ofstream fout("dest.txt");
	if (!fin)
	{
		cout<<"source file cannot be opened"<<endl;
		return 0;
		
	}
	if (!fout)
	{
		cout<<"destination file cannot be created"<<endl;
		return 0;
	}
	string line;
	while (getline(fin,line))
	{
		fout<<line<<endl;
	}
	fin.close();
	fout.close();
	cout<<"file copied successfully";
	
}
