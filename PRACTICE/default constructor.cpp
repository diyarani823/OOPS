#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int rno;
		float gpa;
};
student(){
	
}
student(string s,int r,float g)
{
	name=s;
	rno=r;
	gpa=g;
}
};
int main()
{
	student s1("diya rani",165,3.3);
	student s2;
	s2.name="diiyaa";
	s2.rno=1655;
	s2.gpa=3.6;
	cout<<s1.name<<" "<<s1.rollnum<<" "<<s1.gpa;
		cout<<s2.name<<" "<<s2.rollnum<<" "<<s2.gpa;

}
