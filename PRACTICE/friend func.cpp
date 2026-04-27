#include<iostream>
using namespace std;
class student{
	private:
	 int marks;
	 public:
	 	student()
	 	{
	 		marks=85;
		 }
		 friend void showmarks(student s);
};
void showmarks(student s)
{
	cout<<"marks:"<<s.marks;
	
}
int main()
{
	student s1;
	showmarks(s1);
	return 0;
}
