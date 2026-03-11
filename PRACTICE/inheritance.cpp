#include<iostream>
using namespace std;
class person{
	public:
		string name;
		int age;
		person(string n, int a)
		{
			name=n;
			age=a;
		}
	};
		class student:public person{
			public:
			int marks;
			student(string n,int a,int m):person(n,a)
			{
				marks=m;
			}
			void display()
			{
				cout<<name<<endl<<age<<endl<<marks<<endl;
			}
			
		};
int main()
{
	student s1("ali",20,18);
	s1.display();
}

