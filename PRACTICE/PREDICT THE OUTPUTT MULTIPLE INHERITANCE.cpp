#include<iostream>
using namespace std;

class A{
public:
    A(int x){ cout<<"A"<<x<<" "; }
};

class B: public A{
public:
    B(int x): A(x+1){ cout<<"B"<<x<<" "; }
};

class C: public A{
public:
    C(int x): A(x+2){ cout<<"C"<<x<<" "; }
};

class D: public B, public C{
public:
    D(int x): B(x+4), C(x+5){ cout<<"D"<<x<<" "; }
};

int main(){
    D obj(1);
}
