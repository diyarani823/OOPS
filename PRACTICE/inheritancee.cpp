#include<iostream>
using namespace std;
class base{
	public:
		int num1;
		base(int x)
		{
			num1=x;
		}
};
class derived:public base{
	public:
		int num2;
		int num3;
		derived():base(0)
		{
			num2=num3=0;
		}
		derived(int x,int y,int z):base(x)
		{
			num2=y;
			num3=z;
		}
};
int main()
{
	derived d1(4,3,2);
	cout<<"num1"<<d1.num1<<endl;
}
