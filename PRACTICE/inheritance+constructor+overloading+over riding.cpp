#include<iostream>
using namespace std;
class shape{
public:
    shape(){
        cout<<"Shape constructor"<<endl;
    }
    void display(int x){
        cout<<"Number: "<<x<<endl;
    }
    virtual void draw(){
        cout<<"Drawing Shape"<<endl;
    }
};
class circle : public shape{
public:
    circle(){
        cout<<"Circle constructor"<<endl;
    }
    void display(double x){
        cout<<"Double number: "<<x<<endl;
    }
    void draw(){
        cout<<"Drawing Circle"<<endl;
    }
};
int main()
{
    circle c;
    c.display(10);
    c.display(5.5);
    c.draw();
}
