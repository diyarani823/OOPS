#include<iostream>
using namespace std;
class circle{
	public:
	float radius;
	float pi;
	int* c;
	
	circle(int r,int p,int y)
	{
		radius=r;
		pi=p;
		c=new int(y);
	}
circle(const circle& hello){
	radius=hello.radius;
	pi=hello.pi;
	c=hello.c;
}
};
int main(){
	circle c1(30,3,5);
	circle c2(c1);
	cout<<"pi "<<c1.pi <<endl<<"radius "<<c1.radius <<endl<<"c "<<*c1.c;
		cout<<"pi "<<c2.pi <<endl<<"radius "<<c2.radius <<endl<<"c "<<*c2.c;
		*c1.c=7;
		cout<<"after changing "<<endl;
			cout<<"pi "<<c1.pi <<endl<<"radius "<<c1.radius <<endl<<"c "<<*c1.c;
		cout<<"pi "<<c2.pi <<endl<<"radius "<<c2.radius <<endl<<"c "<<*c2.c;

}
