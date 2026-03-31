#include<iostream>
using namespace std;
class base
{
	public:
	int x;
};
class derived1:public base{
	
};
class derived2:public base{
	
};
class derived3:public derived1,public derived2{
	
};
int main()
{
	derived3 d;
	d.derived1::x=10;
	cout<<d.derived1::x;
}
