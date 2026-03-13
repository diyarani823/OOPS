#include<iostream>
using namespace std;

class Person{
protected:
    string name;
public:
    Person(string n){
        name = n;
    }
    void showPerson(){
        cout<<"Name: "<<name<<endl;
    }
};

class Student: public Person{
protected:
    int roll;
public:
    Student(string n,int r):Person(n){
        roll = r;
    }
    void showStudent(){
        cout<<"Roll No: "<<roll<<endl;
    }
};

class Result: public Student{
    int marks;
public:
    Result(string n,int r,int m):Student(n,r){
        marks = m;
    }
    void display(){
        showPerson();
        showStudent();
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
    Result r1("Ali",101,85);
    r1.display();
}
