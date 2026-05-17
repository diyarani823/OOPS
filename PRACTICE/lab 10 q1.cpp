#include<iostream>
using namespace std;
template<typename t1,typename t2>
class calc{
	private:
	t1 num1;
	t2 num2;
	public:
calc(t1 a,t2 b)
{
	num1=a;
	num2=b;
	
}
void add()
{
	cout<<"addition"<<num1+num2<<endl;
}
void subtract()
{
		cout<<"subtract"<<num1-num2<<endl;
}
void multiply()
{
		cout<<"multiply"<<num1*num2<<endl;
}
void divide()
{
	if (num2!=0)
			cout<<"divide"<<num1/num2<<endl;
else
	cout<<"not poss";
}
};
int main()
{
	calc <int,int> c(20,5);
	cout<<"single type";
	c.add();
	c.subtract();
	c.multiply();
	c.divide();
	calc <int,float> c1(20,5.4);
	cout<<"mix type";
	c.add();
	c.subtract();
	c.multiply();
	c.divide();
	
}
