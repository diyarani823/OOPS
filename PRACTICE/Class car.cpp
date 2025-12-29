#include<iostream>
using namespace std;
class car
{
public:
 string name;
 int price;
 int seats;
	
};
int main()
{
	car c1;
	c1.name="honda city";
	c1.price=800000;
	c1.seats=4;
	car c2;
	c2.name="suzki";
	c2.price=600000;
	c2.seats=2;
	car c3;
	c3.name="alto";
	c3.price=300000;
	c3.seats=5;
	cout<<c1.name<<' '<<c1.price<<' '<<c1.seats<<endl;
		cout<<c2.name<<' '<<c2.price<<' '<<c2.seats<<endl;
	cout<<c3.name<<' '<<c3.price<<' '<<c3.seats<<endl;

}
