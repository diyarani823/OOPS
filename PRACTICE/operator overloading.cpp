#include<iostream>
using namespace std;
class complex{
	public:
		int real,img;
		complex(int r,int i)
		{
			real=r;
			img=i;
		}
		complex operator + (const complex& obj ){
			complex temp(real+obj.real,img+obj.img);
			return temp;
		}
		void display()
		{
			cout<<real<<"+"<<img<<"i"<<endl;
		}
};
int main()
{
	complex c1(10,20),c2(5,2);
	complex c3=c1+c2;
	c3.display();
	
}
