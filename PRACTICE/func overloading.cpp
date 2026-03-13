#include<iostream>
using namespace std;
class printer{
	public:
int display(int a){
	cout<<"integer"<<a<<endl;
}
double display(double a)
{
	cout<<"double"<<a<<endl;
	}
	string display(string s){
		cout<<"string"<<s<<endl;
		
	}
};
int main()
{
	printer d;
	d.display(2);
	d.display(300);
	d.display("diya");
}
