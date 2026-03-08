#include<iostream>
using namespace std;
class students{
	public:
	string name;
	static int count;
	students()
	{
		count++;
	}
};
int students::count=0;
int main()
{
students exp1,xexp2,exp3;
cout<< students::count;	
}

