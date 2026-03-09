#include<iostream>
using namespace std;
class complex{
	public:
		int real,img
		complex(int i.int r)
		{
			real=i;
			img=r;
		}
		complex operator -(const complex& hello )
		{
			complex temp(real-obj.real,img-bj.img);
			return temp
		}
		void display()
		{
			cout<<real<<"-"<<img<<"i"<<endl;
		}
};
int main()
{
	complex c1(24,26),c2(30,4);
	complex c3=c1-c2;
	c3.display();
}

