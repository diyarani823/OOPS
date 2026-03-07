#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int age;
};
int main()
{
	student* s1=new student;
	s1->name="diya";
	cout<<"student 1:name"<<s1->name<<endl;
}

