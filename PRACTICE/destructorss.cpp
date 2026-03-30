#include<iostream>
using namespace std;

class student{
	public:
	string* name;
	int* age;
	student(string n,int a)
	{
		name= new string (n);
		age=new int (a);
		cout<<*name<<"constructor called";
	}
	~student()
	{
		cout<<*name<<"destructor called";
		delete name;
		delete age;
	}
};

int main()
{
student s1("diya",18);
student s2("hehe",18);
student s3("haha",18);	
	
	
}
