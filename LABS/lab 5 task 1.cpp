#include<iostream>
using namespace std;

class base{
private:
int privateint;
protected:
int protectedint;
public:
int publicint;
void setprivateint(int x){
privateint = x;
}
void setprotectedint(int x){
protectedint = x;
}
void setpublicint(int x){
publicint = x;
}
int getprivateint(){
return privateint;
}
int getprotectedint(){
return protectedint;   
}
int getpublicint(){
return publicint;      
}
};
class publicchild: public base{
public:
void showacess()
{
cout<<"public inheritance"<<endl;
cout<<"private int "<<getprivateint()<<endl;
cout<<"protected int "<<protectedint<<endl;
cout<<"public int "<<publicint<<endl;
cout<<endl;
}
};
class protectedchild: protected base{
public:
void showacess()
{
cout<<"protected inheritance"<<endl;
cout<<"private int "<<getprivateint()<<endl;
cout<<"protected int "<<protectedint<<endl;
cout<<"public int "<<publicint<<endl;
cout<<endl;
}
void setvalues(int a,int b,int c){
setprivateint(a);
setprotectedint(b);
setpublicint(c);
}
};
class privatechild: private base{
public:
void showacess()
{
cout<<"private inheritance"<<endl;   
cout<<"private int "<<getprivateint()<<endl;
cout<<"protected int "<<protectedint<<endl;
cout<<"public int "<<publicint<<endl;
cout<<endl;
}	
void setvalues(int a,int b,int c){
setprivateint(a);
setprotectedint(b);
setpublicint(c);}
};
int main()
{
publicchild pc;
pc.setprivateint(10);
pc.setprotectedint(20);
pc.setpublicint(30);   
pc.showacess();
protectedchild prc;
prc.setvalues(40,50,60);   
prc.showacess();
privatechild prvc;
prvc.setvalues(70,80,90);
prvc.showacess();
}

