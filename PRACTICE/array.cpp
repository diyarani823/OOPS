#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int age;
		student(string n,int a)
		{
			name=n;
			age=a;
		}
};
int main()
{
	student students[2]={student("diya",18),student("mishal",18)};
cout<<"student 1: Name:"<<students[0].name<<"student 1:age:"<<students[0].age;
cout<<"student 1: Name:"<<students[1].name<<"student 1:age:"<<students[1].age;

}

