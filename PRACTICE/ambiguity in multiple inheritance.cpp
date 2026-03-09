#include<iostream>
using namespace std;
class base1{
	public:
		void display(){
		cout<<"car 1 starts"<<endl;
		}};
		class base2{
			public:
			void display()
			{
				cout<<"car 2 starts"<<endl;
			}
		};
			class derived:public base1,public base2{
			};
int main()
{
	derived obj;
	obj.base1::display();
}
