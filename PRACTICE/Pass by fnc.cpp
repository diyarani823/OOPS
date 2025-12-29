#include<iostream>
using namespace std;
class car
{
public:
 string name;
 int price;
 int seats;
	
};
void print(car c){
		cout<<c.name<<' '<<c.price<<' '<<c.seats<<endl;

	
}
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
	print(c1);
	print(c2);
	print(c3);

}
