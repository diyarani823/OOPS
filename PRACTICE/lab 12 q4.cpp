#include<iostream>
#include<fstream>
#include<climits>

using namespace std;

class participant{
	private:
		string name;
		int id,score;

	public:

		participant(int id,string name,int score){
			this->id=id;
			this->name=name;
			this->score=score;
		}

		participant()
		{
		}

		void input(){

			ofstream fout("participant.txt",ios::app);

			if(!fout){
				cout<<"file cannot be created"<<endl;
				return;
			}

			fout<<id<<" "<<name<<" "<<score<<endl;

			fout.close();
		}

		void output(int reqid){

			ifstream fin("participant.txt");

			if(!fin){
				cout<<"file cannot be opened"<<endl;
				return;
			}

			int id;
			string name;
			int score;

			bool found=false;

			while(fin>>id>>name>>score){

				if (id==reqid){

					cout<<"id: "<<id<<endl;
					cout<<"name: "<<name<<endl;
					cout<<"score: "<<score<<endl;

					found=true;
					break;
				}
			}

			if(!found){
				cout<<"record not found"<<endl;
			}

			fin.close();
		}
};

int main()
{
	participant p1(1,"Ali",90);
	participant p2(2,"Sara",85);
	participant p3(3,"Ahmed",95);

	p1.input();
	p2.input();
	p3.input();

	participant p;

	p.output(2);

	return 0;
}
