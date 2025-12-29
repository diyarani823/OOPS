#include<iostream>
using namespace std;
class student
{
public:
 string name;
 int rollnum;
 float gpa;
	
};
int main()
{
	student s;
	s.rollnum=165;
	s.gpa=3.3;
	s.name="diya";
	student s1;
	s1.rollnum=181;
	s1.gpa=3.5;
	s1.name="anousha";
	cout<<s1.name<<' '<<s1.gpa<<' '<<s1.rollnum<<endl;
		cout<<s.name<<' '<<s.gpa<<' '<<s.rollnum<<endl;

}
