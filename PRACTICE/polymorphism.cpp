#include<iostream>
using namespace std;
class calculator{
	public:
	int add(int a,int b)
		{
			return a+b;
		}
			int add(int a,int b,int c)
		{
			return a+b+c;
		}	
		double add(double a,double b)
		{
			return a+b;
		}
};
int main()
{
	calculator sumfind;
	cout<<sumfind.add(2,3)<<endl;
	cout<<sumfind.add(2,3,4)<<endl;
	cout<<sumfind.add(3.0,5.8)<<endl;
}

