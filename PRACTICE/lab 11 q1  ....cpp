#include<iostream>
using namespace std;
class passwordlengthexception{
	public:
		const char* what()
		{
			return "password length should be 6";
		}
};
class passworddigitexception{
	public:
		const char* what()
		{
			return "password must contain atleast 1 digit";
		}
};
int main()
{
	string username,password;
	cout<<"enter username";
	cin>>username;
	cout<<"enter password";
	cin>>password;
	try{
		if (password.length()<6)
		{
			passwordlengthexception e;
			throw e;
		}
		int found=-1;
		int i;
		for(i=0;i<password.length();i++){
			if(password[i]>=48 && password[i]<=57)
			{
				found=1;
				break;
			}
		}
		if (found==-1)
		{
			passworddigitexception e;
			throw e;
		}
		cout<<"login successfull";
		cout<<"enter username"<<username<<endl<<"enter password"<<password<<endl;
		
	}
	catch(passwordlengthexception &e)
	{
		cout<<e.what();
	}
	catch(passworddigitexception &e){
		cout<<e.what();
	}
}
