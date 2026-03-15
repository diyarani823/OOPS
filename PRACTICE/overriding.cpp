#include<iostream>
using namespace std;
class animal{
	public:
	virtual	void sound()
		{
			cout<<"animal sound";
		}
};
class dog:public animal{
	public:
		void sound() override{
		cout<<"dog barks bahu bahu";
	}
};
int main()
{
dog d1;
d1.sound();
animal d2;
d2.sound();
}
