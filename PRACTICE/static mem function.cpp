#include<iostream>
using namespace std;
class example{
	public:
		static int a;
		int b=4;
		static void display()
{
	cout<<a<<endl;
}
};

int example::a=5;

int main()
{
	cout<<example::a<<endl;
	example::display();
}
