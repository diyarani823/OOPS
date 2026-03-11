#include<iostream>
using namespace std;
class cpy{
	public:
		string hi;
		string hry;
		cpy(string h, string hr)
		{
			hi=h;
			hry=hr;
		}
		cpy(const cpy& obj)
		{
			hi=obj.hi;
			hry=obj.hry;
		}
		void display()
		{
			cout<<hi<<endl<<hry<<endl;
		}
};
int main()
{
	cpy c1("hello","im good");
	cpy c3(c1);
	c3.display();
}
