#include<iostream>
using namespace std;

class shape{
public:
    virtual void area(){
        cout<<"Area of shape"<<endl;
    }
};

class circle : public shape{
public:
    void area(){
        cout<<"Area of circle"<<endl;
    }
};

int main()
{
    circle c;
    c.area();
}
