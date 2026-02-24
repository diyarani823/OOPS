#include<iostream>
using namespace std;

class Item{
protected:
string name;
int quantity;
public:
void setItem(string n,int q){name=n;quantity=q;}
int getQuantity(){return quantity;}
};

class BakedGoods:public Item{
protected:
double discount=0.10;
};

class Cakes:public BakedGoods{
int price=600;
public:
double calculateBill(){return quantity*price*(1-discount);}
};

class Bread:public BakedGoods{
int price=200;
public:
double calculateBill(){return quantity*price*(1-discount);}
};

class Drinks:public Item{
double discount=0.05;
int price=100;
public:
double calculateBill(){return quantity*price*(1-discount);}
};

int main(){
Cakes cake;
Bread bread;
Drinks drink;
int q;
double total=0;

cout<<"Enter quantity of Cakes: ";
cin>>q;
cake.setItem("Cake",q);
total+=cake.calculateBill();

cout<<"Enter quantity of Bread: ";
cin>>q;
bread.setItem("Bread",q);
total+=bread.calculateBill();

cout<<"Enter quantity of Drinks: ";
cin>>q;
drink.setItem("Drink",q);
total+=drink.calculateBill();

cout<<"\nTotal Bill: "<<total<<endl;
return 0;
}
