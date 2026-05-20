#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string sentence;
	cout<<"enter a sentence";
	getline(cin,sentence);
	int len=sentence.length();
	cout<<"length of sentence"<<len<<endl;
	ofstream diya("oop.txt");
	if (!diya)
	{
		cout<<"file not found"<<endl;
		return 0 ;
	}
	diya<<sentence;
	diya.close();
	cout<<"data written succesfully";
	ifstream fin("oop.txt");
	if (!fin)
	{
		cout<<"data cannot be written";
		return 0;
	}
	string data;
	
	cout<<"reading data from file"<<endl;
	getline(fin,data);
	cout<<data<<endl;
	fin.close();
}
