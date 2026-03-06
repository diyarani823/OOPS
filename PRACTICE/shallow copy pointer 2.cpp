#include<iostream>
using namespace std;
class person{
	public:
	string name;
	int age;
	char*gender;
	
	person(string n,int a,char g)
	{
       name=n;
		age=a;
		gender=new char(g);
	}
person(const person& hello){
	name=hello.name;
	age=hello.age;
	gender=hello.gender;
}
};
int main(){
	person p1("hadia",18,'F');
	person p2(p1);
	cout<<"name "<<p1.name <<endl<<"age "<<p1.age <<endl<<"gender "<<*p1.gender<<endl;
	cout<<"name "<<p2.name <<endl<<"age "<<p2.age <<endl<<"gender "<<*p2.gender<<endl;
		*p1.gender='M';
		cout<<"after changing "<<endl;
		cout<<"name "<<p1.name <<endl<<"age "<<p1.age <<endl<<"gender "<<*p1.gender;
	cout<<"name "<<p2.name <<endl<<"age "<<p2.age <<endl<<"gender "<<*p2.gender;
		
}
