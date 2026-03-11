#include<iostream>
using namespace std;
class test{
	public:
		const int x;
		int &ref;
		test(int a,int&b):x(a),ref(b){
			cout<<"x "<<x<<endl;
			cout<<"ref"<<ref<<endl;
			
		}
};
int main()
{
	int y=20;
	test t1(10,y);
}
