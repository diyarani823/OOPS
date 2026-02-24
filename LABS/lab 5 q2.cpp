#include<iostream>
using namespace std;

class Teacher{
private:
string name;
int age;
string institute;
public:
void setName(string n){name=n;}
void setAge(int a){age=a;}
void setInstitute(string i){institute=i;}
string getName(){return name;}
int getAge(){return age;}
string getInstitute(){return institute;}
};

class HumanitiesTeacher:public Teacher{
private:
string department;
string courseName;
string designation;
public:
void setDepartment(){department="Humanities";}
void setCourseName(){courseName="OOP";}
void setDesignation(string d){designation=d;}
void display(){
cout<<"\n--- Humanities Teacher ---"<<endl;
cout<<"Name: "<<getName()<<endl;
cout<<"Age: "<<getAge()<<endl;
cout<<"Institute: "<<getInstitute()<<endl;
cout<<"Department: "<<department<<endl;
cout<<"Course: "<<courseName<<endl;
cout<<"Designation: "<<designation<<endl;
}
};

class ScienceTeacher:public Teacher{
private:
string department;
string courseName;
string designation;
public:
void setDepartment(){department="Science";}
void setCourseName(){courseName="LDST";}
void setDesignation(string d){designation=d;}
void display(){
cout<<"\n--- Science Teacher ---"<<endl;
cout<<"Name: "<<getName()<<endl;
cout<<"Age: "<<getAge()<<endl;
cout<<"Institute: "<<getInstitute()<<endl;
cout<<"Department: "<<department<<endl;
cout<<"Course: "<<courseName<<endl;
cout<<"Designation: "<<designation<<endl;
}
};

class MathsTeacher:public Teacher{
private:
string department;
string courseName;
string designation;
public:
void setDepartment(){department="Maths";}
void setCourseName(){courseName="DS";}
void setDesignation(string d){designation=d;}
void display(){
cout<<"\n--- Maths Teacher ---"<<endl;
cout<<"Name: "<<getName()<<endl;
cout<<"Age: "<<getAge()<<endl;
cout<<"Institute: "<<getInstitute()<<endl;
cout<<"Department: "<<department<<endl;
cout<<"Course: "<<courseName<<endl;
cout<<"Designation: "<<designation<<endl;
}
};

class ExtraTeacher:public Teacher{
private:
string department;
string courseName;
string designation;
public:
void setDepartment(){department="Computer";}
void setCourseName(){courseName="CAG";}
void setDesignation(string d){designation=d;}
void display(){
cout<<"\n--- Extra Teacher ---"<<endl;
cout<<"Name: "<<getName()<<endl;
cout<<"Age: "<<getAge()<<endl;
cout<<"Institute: "<<getInstitute()<<endl;
cout<<"Department: "<<department<<endl;
cout<<"Course: "<<courseName<<endl;
cout<<"Designation: "<<designation<<endl;
}
};

int main(){
HumanitiesTeacher ht;
ScienceTeacher st;
MathsTeacher mt;
ExtraTeacher et;

ht.setName("Ali");
ht.setAge(35);
ht.setInstitute("ABC University");
ht.setDepartment();
ht.setCourseName();
ht.setDesignation("Professor");

st.setName("Sara");
st.setAge(40);
st.setInstitute("XYZ University");
st.setDepartment();
st.setCourseName();
st.setDesignation("Lecturer");

mt.setName("Ahmed");
mt.setAge(38);
mt.setInstitute("LMN University");
mt.setDepartment();
mt.setCourseName();
mt.setDesignation("Assistant Professor");

et.setName("Zara");
et.setAge(42);
et.setInstitute("DEF University");
et.setDepartment();
et.setCourseName();
et.setDesignation("Senior Lecturer");

ht.display();
st.display();
mt.display();
et.display();
}
