#include<iostream>
using namespace std;
class cricketer{
	public:
		string name;
		int runs;
		cricketer(string n,int r)
		{
			name=n;
			runs=r;
		}
		void print()
		{
			cout<<name<<" "<<runs<<endl;
		}
};
int main()
{
	cricketer c1("virat kolhi",25000);
		cricketer c2("rohit sharma",18000);
	cricketer c3("pandeya",15000);

	c1.print();
	c2.print();
	c3.print();
}
