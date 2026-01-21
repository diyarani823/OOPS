#include<iostream>
#include<string>
using namespace std;
class student{
	public:
	string name;
	int rno;
	float gpa;
	student()
{
	
}
student (string s,int r){
	name=s;
	rno=r;
}
	student (string s,int r,float g){
	name=s;
	rno=r;
	gpa=g;
}
void display()
{
	cout<<"name"<<name<<endl;
		cout<<"roll num"<<rno<<endl;
	cout<<"gpa"<<gpa<<endl;

}
};
int main()
{
	student s1("diya",165);
	student s2("diya",165,3.3);
	cout<<"student 1:"<<endl;
	s1.display();
	cout<<"student 2:"<<endl;
	s2.display();
	return 0;
	
}


