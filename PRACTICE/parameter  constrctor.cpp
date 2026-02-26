#include<iostream>
using namespace std;
class circle{
	public:
	float radius;
	const float pi=3.142;
	
	public:
		circle(int r,int p){
			radius=r;
			pi=p;
		}
};
int main()
{
	circle c1(30,3.142);
	cout<<"pi"<<c1.pi<<endl<<"Radis"<<c1.radius;
}
