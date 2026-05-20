#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string sentence;
	cout<<"enter a sentence";
	getline(cin,sentence);
	int len=sentence.length();
	cout<<"length of sentence"<<len<<endl;
	ofstream fout("oop.txt");
	if(!fout){
		cout<<"file cannot be created"<<endl;
		return 0;
	}
	fout<<sentence;
	fout.close();
	cout<<"Data written successfully"<<endl;
	ifstream fin("oop.txt");
	if (!fin)
	{
		cout<<"file cannot be opened"<<endl;
		
	}
	string data;
	cout<<"reading data from file"<<endl;
	getline(fin,data);
	cout<<data<<endl;
	fin.close();
}
