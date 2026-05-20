#include<iostream>
using namespace std;

class passwordlengthexception
{
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
        return "password must contain at least one digit.";
    }
};

int main()
{
    string username, password;

    cout << "Enter your username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    try
    {
        if(password.length() < 6)
        {
            passwordlengthexception e;
            throw e;
        }

        int found = -1;

        for(int i = 0; i < password.length(); i++)
        {
            if(password[i] >= '0' && password[i] <= '9')
            {
                found = 1;
                break;
            }
        }

        if(found == -1)
        {
            passwordDigitException e;
            throw e;
        }

        cout << "Login successful" << endl;
        cout << "Username: " << username << endl;
        cout << "Password: " << password << endl;
    }

    catch(passwordlengthexception &e)
    {
        cout << e.what();
    }

    catch(passwordDigitException &e)
    {
        cout << e.what();
    }
}
