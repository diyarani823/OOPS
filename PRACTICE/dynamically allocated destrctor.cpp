#include<iostream>
#include<string>
using namespace std;
class students{
	public:
	string* name;
	int* age;
	students(string n,int a)
	{
		name=new string(n);
		age=new int (a);
		cout<<*name<<"constructor called"<<endl;
	}
	~students()
	{
				cout<<*name<<"destructor called"<<endl;

		delete name;
		delete age;
	
		
	}
};
int main()
{
	students s1("diya",18);
	students s2("mishal",18);
	students s3("hi",18);
}
