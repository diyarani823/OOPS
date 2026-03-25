#include<iostream>
using namespace std;
class shape{
	public:
	virtual	void area(){
		cout<<"area of the shape";
		}
};
class rectangle:public shape {
	public:
		void area() override{
		cout<<"area of rectangle";
		}
};
int main()
{
shape s;
s.area();
}
