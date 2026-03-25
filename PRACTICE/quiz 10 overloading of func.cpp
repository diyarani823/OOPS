#include<iostream>
using namespace std;
class calculator{
	
	private:
	int num1;
	int	num2;
	int	num3;
	public:
	calculator()
	{
		cout<<"take 3 inputs";
		cin>>num1>>num2>>num3;
	}
	int add(int a,int b)
	{
		return a+b;
	}
		int add(int a,int b,int c)
	{
		return a+b+c;
	}
	int multiply(int a,int b)
	{
		return a*b;
	}
		int multiply(int a,int b,int c)
	{
		return a*b*c;
	}
		int subtract(int a,int b)
	{
		return a-b;
	}
	int subtract (int a,int b,int c)
	{
		return a-b-b;
	}
	float divide(int a,int b)
	{
		return (float)a/b;
		}
		void display()
		{
			cout<<"add 2 num "<<add(num1,num2)<<endl;
			cout<<"add 3 num "<<add(num1,num2,num3)<<endl;
			cout<<"multiply 2 num "<<multiply(num1,num2)<<endl;
			cout<<"multiply 3 num "<<multiply(num1,num2,num3)<<endl;
			cout<<"subtract 2 num "<<subtract(num1,num2)<<endl;
			cout<<"subtract 3 num "<<subtract(num1,num2,num3)<<endl;
			cout<<"divide 2 num"<<divide(num1,num2)<<endl;
			}	
};
int main()
{
	calculator c;
	c.display();
	return 0;
}
