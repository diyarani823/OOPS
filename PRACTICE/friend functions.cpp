#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int a;
		public:
			A(int num)
			{
				a=num;
			}
			friend void sum(A,B);
};
	class B
	{
		private:
			int b;
				public:
					B(int num)
					{
						b=num;
					}
					friend void sum(A,B);
	};
	void sum(A obj1,B obj2)
	{
		cout<<obj1.a+obj2.b<<endl;
		
	}
	int main()
	{
		A obj1(20);
		B obj2(30);
		sum(obj1,obj2);
	}
