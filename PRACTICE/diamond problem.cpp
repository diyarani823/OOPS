#include<iostream>
using namespace std;
class base{
	public:
		void display()
		{
			cout<<"car starts"<<endl;
		}
};
class derived1:public base{
	
};
class derived2:public base{
	
};
class derived3:public derived1,public derived2{
	
};
int main()
{
	derived3 obj;
	obj.derived1::display();
}
