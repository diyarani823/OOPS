#include<iostream>
using namespace std;
class destructor{
	public:
		string* name;
		int* age;
		destructor(string n,int a)
		{
			name=new string (n);
			age=new int (a);
			cout<<"constructor is called"<<endl;
		}
	~destructor(){
		cout<<"destructor is called"<<*name<<*age<<endl;
		delete name;
		delete age;
	}
	void display(){
		cout<<*name;
		cout<<*age;
	}
};
		int main(){
			destructor d1("diya",18);
			destructor d2("bhawna",19);
			d1.display();
			d2.display();
		}

