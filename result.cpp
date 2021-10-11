#include<iostream>
#include<iomanip>
using namespace std;

class Student
{
	private:
		int grid,m1,m2,m3,m4,m5,total,grade;
		float avg;
		char name[100];
	public:
		void get()
		{
			cout<<"Enter Your Name :";
			cin>>name;
			cout<<"Enter Your GRID :";
			cin>>grid;
			cout<<"Enter OOP marks :";
			cin>>m1;
			cout<<"Enter SE marks :";
			cin>>m2;
			cout<<"Enter DS marks :";
			cin>>m3;
			cout<<"Enter OP marks :";
			cin>>m4;
			cout<<"Enter DBMS marks :";
			cin>>m5;
			total = m1+m2+m3+m4+m5;
			avg = total / 5;
			cout<<"\n";
		}
		void print()
		{
			cout<<"----------------------\n"<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"GRID : "<<grid<<endl;
			cout<<"OOP marks : "<<m1<<endl;
			cout<<"SE marks : "<<m2<<endl;
			cout<<"DS marks : "<<m3<<endl;
			cout<<"OP marks : "<<m4<<endl;
			cout<<"DBMS marks : "<<m5<<endl;
			cout<<"Total : "<<total<<endl;
			cout<<"Per % : "<<avg<<endl;
			if(avg >= 80)
			{
				cout<<"Grade : A"<<endl;
				cout<<"Pass"<<endl;
			}
			else if(avg >= 60)
			{
				cout<<"Grade : B"<<endl;
				cout<<"Pass"<<endl;
			}
			else if(avg >= 35)
			{
				cout<<"Grade : C"<<endl;
				cout<<"Pass"<<endl;
			}
			else
			{
				cout<<"Fail"<<endl;
			}
		}	
};
int main()
{
	Student student1,student2;
	
	student1.get();

	student1.print();
	
}
