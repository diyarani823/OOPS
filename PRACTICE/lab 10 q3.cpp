#include<iostream>
using namespace std;
template<typename t>
class mycontainer{
	private:
		t value;
		public:
		mycontainer(t a)
		{
			value=a;
		}
		void increase(){
			cout<<value++;
		}
	};
		
		template<>
		class mycontainer<char>{
			private:
		char value;
		public:
		mycontainer(char a)
		{
			value=a;
		}
		void uppercase(){
		if ( value>='a' && value<='z')
		{
			value=value-32;
		}
		cout<<"uppercase value";
		cout<<value;
		}
};
int main()
{
mycontainer<int> c(20);
cout<<"integer"<<endl;
c.increase();
mycontainer<char> c1('d');
cout<<"char"<<endl;
c1.uppercase();


}
