#include<iostream>
using namespace std;

class shape{
protected:
    int x;

public:
    shape(int a){
        x = a;
    }

    virtual void area(){
        cout<<"Area of shape"<<endl;
    }
};

class square : public shape{
public:
    square(int a) : shape(a) {}

    void area(){
        cout<<"Area of square = "<< x*x <<endl;
    }
};

class rectangle : public shape{
    int y;

public:
    rectangle(int a,int b) : shape(a){
        y = b;
    }

    void area(){
        cout<<"Area of rectangle = "<< x*y <<endl;
    }
};

int main()
{
    shape *s;

    square sq(4);
    rectangle r(4,5);

    s = &sq;
    s->area();

    s = &r;
    s->area();
}
