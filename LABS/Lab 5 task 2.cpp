#include<iostream>
using namespace std;
class Teacher{
private:
string name;
int age;
string institute;
public:
void setName(string n){ name = n; }
void setAge(int a){ age = a; }
void setInstitute(string i){ institute = i; }
string getName(){ return name; }
int getAge(){ return age; }
string getInstitute(){ return institute; }
};
class HumanitiesTeacher : public Teacher{
private:
string department;
string courseName;
string designation;
public:
void setDepartment(){ department = "Humanities"; }
void setCourseName(string c){ courseName = c; }
void setDesignation(string d){ designation = d; }
string getDepartment(){ return department; }
string getCourseName(){ return courseName; }
string getDesignation(){ return designation; }
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
class ScienceTeacher : public Teacher{
private:
    string department;
    string courseName;
    string designation;

public:
    void setDepartment(){ department = "Science"; }
    void setCourseName(string c){ courseName = c; }
    void setDesignation(string d){ designation = d; }

    string getDepartment(){ return department; }
    string getCourseName(){ return courseName; }
    string getDesignation(){ return designation; }

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
class MathsTeacher : public Teacher{
private:
    string department;
    string courseName;
    string designation;
public:
    void setDepartment(){ department = "Maths"; }
    void setCourseName(string c){ courseName = c; }
    void setDesignation(string d){ designation = d; }

    string getDepartment(){ return department; }
    string getCourseName(){ return courseName; }
    string getDesignation(){ return designation; }
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

int main(){
    HumanitiesTeacher ht;
    ScienceTeacher st;
    MathsTeacher mt;

    string name, institute, course, designation;
    int age;
    cout<<"Enter OOP Teacher Name: ";
    getline(cin, name);
    ht.setName(name);
    cout<<"Enter Age: ";
    cin>>age;
    ht.setAge(age);
    cin.ignore();
    cout<<"Enter Institute: ";
    getline(cin, institute);
    ht.setInstitute(institute);
    ht.setDepartment();
    cout<<"Enter Course Name: ";
    getline(cin, course);
    ht.setCourseName(course);
    cout<<"Enter Designation: ";
    getline(cin, designation);
    ht.setDesignation(designation);
    cout<<"\nEnter LDST Teacher Name: ";
    getline(cin, name);
    st.setName(name);
    cout<<"Enter Age: ";
    cin>>age;
    st.setAge(age);
    cin.ignore();
    cout<<"Enter Institute: ";
    getline(cin, institute);
    st.setInstitute(institute);
    st.setDepartment();
    cout<<"Enter Course Name: ";
    getline(cin, course);
    st.setCourseName(course);
    cout<<"Enter Designation: ";
    getline(cin, designation);
    st.setDesignation(designation);
    cout<<"\nEnter CAG Teacher Name: ";
    getline(cin, name);
    mt.setName(name);
    cout<<"Enter Age: ";
    cin>>age;
    mt.setAge(age);
    cin.ignore();
    cout<<"Enter Institute: ";
    getline(cin, institute);
    mt.setInstitute(institute);
    mt.setDepartment();
    cout<<"Enter Course Name: ";
    getline(cin, course);
    mt.setCourseName(course);
    cout<<"Enter Designation: ";
    getline(cin, designation);
    mt.setDesignation(designation);
    ht.display();
    st.display();
    mt.display();
}

