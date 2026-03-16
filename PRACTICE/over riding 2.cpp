#include<iostream>
using namespace std;

class shape{
public:
    virtual void draw(){
        cout<<"Drawing shape"<<endl;
    }
};

class rectangle : public shape{
public:
    void draw(){
        cout<<"Drawing rectangle"<<endl;
    }
};

int main(){
    rectangle r;
    r.draw();
}
