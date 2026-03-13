#include<iostream>
using namespace std;

class car{
	public:
		void show()
		{
			cout<<"show";
		}
};

class derived1: virtual public car{
};

class derived2: virtual public car{
};

class derived3: public derived2{
};

int main()
{
	derived3 d3;
	d3.show();
}
