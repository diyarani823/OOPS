#include<iostream>
using namespace std;

class shape{
public:
    virtual void draw(){
        cout<<"Drawing shape"<<endl;
    }
};

class circle : public shape{
public:
    void draw(){
        cout<<"Drawing circle"<<endl;
    }
};

int main(){
    circle c;
    c.draw();
}
