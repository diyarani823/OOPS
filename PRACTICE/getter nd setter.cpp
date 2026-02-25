#include<iostream>
using namespace std;
class MobilePhone{
	private:
		string brand;
		int batterylevel;
		bool isOn;
		public:
		void setBrand(string b)
		{
			brand=b;
		}
		string getbrand()
		{
			return brand;
		}
		void setbatterylevel(int bl)
		{
			if (bl<0)
			batterylevel=0;
			else if(bl>100)
			batterylevel=100;
			else
			batterylevel=bl;
		}
		int getbatterylevel()
		{
			return batterylevel;
		}
		void poweron()
		{
	isOn=true;
		}
		void poweroff()
		{
			isOn=false;
		}
		void charge(int amount)
		{
			batterylevel=batterylevel+amount;
			if (batterylevel>100)
			{
				batterylevel=100;
			}
		}
			void charge(int amount)
		{
			batterylevel=batterylevel-amount;
			if (batterylevel<0)
			{
				batterylevel=0;
			}
			 void displayStatus() {
        cout<<"Brand"<<brand<< endl;
        cout<<"Battery Level"<< batteryLevel<<"%"<<endl;
        if(isOn==true)
        {
        	cout<<"power status ON"<<endl;
		}
		else 
		{
			cout<<"power status OFF"<<endl;
		}
    }
};
int main()
{
	MobilePhone phone1,phone2;
	phone1.setBrand("samsung");
	cout<<phone1.getbrand()<<endl;
	phone1.setbatterylevel(75);
	cout<<phone1.getbatterylevel()<<endl;
	phone1.poweron();
	cout<<phone1.poweron();
	
	
}
