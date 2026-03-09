#include<iostream>
using namespace std;
class base{
public:
void display()
{
	cout<<"hello"<<endl;
	}	
};
class derived:public base{
	public:
		void show()
		{
		
		cout<<"how ru"<<endl;
	}
};
class derived2:public derived{
	public:
		void okay()
		{
			cout<<"im good"<<endl;
		}
};
int main()
{
	derived obj;
	derived2 hello;
	obj.display();
	obj.show();
	hello.okay();
}
