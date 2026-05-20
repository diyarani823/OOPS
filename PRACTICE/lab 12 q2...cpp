#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin("sourcee.txt");
	ofstream fout("destt.txt");
	if (!fin){
		cout<<"file cannot be read";
		return 0;
	}
	if (!fout){
		cout<<"file cannot be opened";
		return 0;
	}
	string line;
	while(getline(fin,line)){
		fout<<line<<endl;
	}
	fin.close();
	fout.close();
}
