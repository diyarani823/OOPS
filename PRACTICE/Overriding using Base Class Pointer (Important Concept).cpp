#include<iostream>
using namespace std;
class animal{
public:
    virtual void sound(){
        cout<<"Animal makes sound"<<endl;
    }
};
class dog : public animal{
public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};
int main()
{
    animal* a;
    dog d;
    a = &d;
    a->sound();
}
