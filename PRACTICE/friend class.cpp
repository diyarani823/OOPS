#include<iostream>
using namespace std;
class ABC{
	private:
		int num;
		public:
			ABC(int a)
			{
				num=a;
			}
		friend class def;	
};
class def{
	public:
		void addfive(ABC obj){
			cout<<obj.num+5<<endl;

		}
		void subtractfive(ABC obj)
		{
			cout<<obj.num-5<<endl;
		}
};
int main()
{
	ABC a(50);
	def b;
	b.addfive(a);
	b.subtractfive(a);
}
