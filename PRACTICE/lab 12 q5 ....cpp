#include<iostream>
#include<fstream>
using namespace std;
int countlines(){
	ifstream fin("story.txt");
	if (!fin){
		cout<<"file cannot be read";
		return 0;
	}
	int count=0;
	string sentence;
	while (getline(fin,sentence));
	{
		if (!sentence.empty() && sentence[0]!='A'){
			cout<<sentence<<endl;
		}
	}
	count++;
}
int main()
{
	int count=countlines();
	cout<<count;
}
