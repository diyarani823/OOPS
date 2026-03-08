#include<iostream>
using namespace std;
class students{
	public:
	string name;
	int age;
	students(string n,int a)
	{
		name=n;
		age=a;
	}
	~students()
	{
		cout<<"destructor called";
		
	}
};
int main()
{
	students s1("diya",18);
}
