#include<iostream>
using namespace std;
template<typename t1,typename t2>
void swapdata(t1 &a,t2 &b)
{

	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x=4;
	int y=5;
	cout<<"before swapping"<<x<<endl<<y<<endl;
	swapdata(x,y);
	cout<<"after swappaing"<<x<<endl<<y<<endl;
}
