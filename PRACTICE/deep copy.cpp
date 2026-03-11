#include<iostream>
using namespace std;
class deep{
	public:
		string hi;
		string hry;
		int *c;
		deep(string h,string hr,int y)
		{
			hi=h;
			hry=hr;
			c=new int(y);
		}
		deep(const deep& obj)
		{
			hi=obj.hi;
			hry=obj.hry;
			c=new int (*obj.c);
		}
		void display()
		{
			cout<<hi<<endl<<hry<<endl<<*c<<endl;
		}
};
int main()
{
	deep d1("hello","diya",18);
	deep d2(d1);
	d2.display();	
}
