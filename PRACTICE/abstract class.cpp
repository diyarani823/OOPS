#include<iostream>
using namespace std;
class shape{
	public:
		virtual void hi()=0;
};
class circle:public shape{
	public:
		void hi(){
		cout<<"im circle";
		}
};
int main()
{
	circle c1;
	c1.hi();
	
}
