#include<iostream>
using namespace std;
class animal{
	public:
		void sound()
		{
		cout<<"animal sound";	
		}
	};
		class dog:public animal
		{
			public:
				void sound(){
					cout<<"bahu bahu";
				}		
};
int main()
{
	animal* ptr;
	dog obj;
	ptr=&obj;
	ptr->sound();
}

