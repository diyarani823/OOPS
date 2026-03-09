#include<iostream>
using namespace std;
class number{
	public:
	int* a;
	int* b;
	int* c;
	number(int x,int y,int z)
	{
		a=new int(x);
		b=new int(y);
		c=new int(z);
	}
	void display(){
		cout<<"a "<<*a<<endl;
		cout<<"b "<<*b<<endl;
		cout<<"c "<<*c<<endl;
	}
	~number(){
		delete a;
		delete b;
		delete c;
		cout<<"memory released"<<endl;
	}
};
int main()
{
	number n1(4,5,6);
	number n2(7,88,9);
	n1.display();
	n2.display();
}
