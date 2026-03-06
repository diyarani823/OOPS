#include<iostream>
using namespace std;
class circle{
	public:
	float radius;
	float pi;
	circle(int r,int p)
	{
		radius=r;
		pi=p;
	}
circle(const circle& hello){
	radius=hello.radius;
	pi=hello.pi;
}
};
int main(){
	circle c1(30,3);
	circle c2(c1);
	cout<<"pi"<<c1.pi<<endl<<"radius"<<c1.radius<<endl;
		cout<<"pi"<<c2.pi<<endl<<"radius"<<c2.radius<<endl;

}
