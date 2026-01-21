#include<iostream>
using namespace std;
class student{
	public:
		int roll;
		float marks;
		student(){
			roll=0;
			marks=0;
		}
		student(int r)
		{
			roll=r;
			marks=0;
		}
		student(int r,float m)
		{
			roll=r;
			marks=m;
			
		}
		void display()
		{
			cout<<"roll no:"<<roll<<endl;
			cout<<"marks:"<<marks<<endl;
		}
};
int main()
{
	student s1;
	student s2(165);
	student s3(165,94);
	cout<<"display student 1 :"<<endl;
	s1.display();
		cout<<"display student 2 :"<<endl;
	s2.display();	
	cout<<"display student 3 :"<<endl;
	s3.display();
}
