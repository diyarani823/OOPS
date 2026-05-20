#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class person{
	private:
		char name[50];
		int age;
		public:
		person(const char n[], int a){
		strcpy(name,n);
			age=a;
		}
		person()
		{}
			void display()
			{
				cout<<"name:"<<name;
				cout<<"age:"<<age;
			}
	};
		int main()
		{
			person person1("diya",18);
			ofstream fout("person.bin",ios::binary);
			if (!fout){
				cout<<"file cannot be created for writing";
				
			}
fout.write((char*)&person1,sizeof(person1));
			fout.close();
			cout<<"data written sucessfully"<<endl;
			person person2;
			ifstream fin("person.bin",ios::binary);
			if(!fin){
				cout<<"file cannot be opened for reading"<<endl;
				return 0;
				
			}
			fin.read((char*)&person2,sizeof(person2));
			fin.close();
			cout<<"data read from file";
			person2.display();
		}

