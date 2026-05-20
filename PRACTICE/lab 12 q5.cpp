#include<iostream>
#include<fstream>
using namespace std;
int countlines(){
	ifstream fin("story.txt");
	if(!fin){
		cout<<"file cannot be opened"<<endl;
		return 0;
	}
	int count=0;
	string sentence;
	while(getline(fin,sentence)){
		if(!sentence.empty() && sentence[0]!='A'){
			cout<<sentence<<endl;
			count++;
		}
	}
	return count;
}
int main()
{
	int count=countlines();
	cout<<"the num of lines without A is"<<count<<endl;
	return 0;
}
