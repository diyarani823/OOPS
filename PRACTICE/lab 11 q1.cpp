#include<iostream>
using namespace std;
class passwordlengthexception{
	public:
		const char* what()
		{
			return "password cannot have less than 6 characters.";
		}
			
};
class passwordDigitException
{
	public:
		const char* what()
		{
			return"password must contain atleast one digit;";
		}
};
int main()
{
	string username,password;
	cout<<"enter your username";
	cin>>username;
	cout<<"enter password";
	try{
		if(password.length()<6){
			passwordlengthexception e;
			throw e;
		}
		int found=-1;
		for(int i=0;i<password.length();i++)
		{
			if(password[i]>=48 && password[i]<=57)
			found=1;
			break;
		}
	}
	if (found==-1)
	{passwordlengthexception e;
			throw e;
		}
	
	cout<<"login successful"<<endl;
	cout<<"username"<<username<<endl<<"password"<<password<<endl;	
	}
	catch(passwordlengthexception &e){
		cout<<e.what;
	}
catch(passwordDigitException &e){
		cout<<e.what;
	}
}
