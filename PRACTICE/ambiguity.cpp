#include<iostream>
using namespace std;
class base1{
	public:
		void display()
		{
			cout<<"func is starting";
		}
};
class base2{
	public:
		void display()
		{
			cout<<"func starts";
		}
};
class derived:public base1,public base2
{
	
};
int main()
{
	derived d1;
	d1.base1::display();
}
