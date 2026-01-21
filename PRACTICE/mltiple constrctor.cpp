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
};
int main()
{
	student s1("diya",165);
	student s2("diya",165,3.3);
	cout<<"student 1:"<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
		cout<<"student 2:"<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;

	return 0;
	
}


