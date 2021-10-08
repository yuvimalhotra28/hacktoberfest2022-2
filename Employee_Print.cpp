#include<iostream>
using namespace std;


class Id
{
	protected : 	
				int eid;
				
	public : 
			void getId()
			{
				cout<<"Enter Employee Id : ";
				cin>>eid;			
			}			
};

class Name : public Id
{
	protected :
			char ename[100];
			
	public : 
			void getName()
			{
				cout<<"Enter Employee Name : ";
				//fflush(stdin);	
				cin.getline(ename,100);	
				
			}		
};

class Salary : public Name
{
	protected : 
				int sal;
			
	public :		
				
	void getSalary()
	{
		cout<<"Enter Salary : ";
		cin>>sal;
		
	}			
	
	
};

class Duration : public Salary
{
	protected : 
				int dur;
				
	public : 
			void getDuration()
			{
				cout<<"Enter Work Duration : ";
				cin>>dur;
				
			}
			
			void print()
			{
				cout<<endl<<"Id : "<<eid<<endl;
				cout<<"Employee Name : "<<ename<<endl;
				cout<<"Salary : "<<sal<<endl;
				cout<<"Duration : "<<dur<<endl;
			}
					
};




int main()
{
	int a,l;
	
	Duration d1,d2,d3;
	
	d1.getName();
	d1.getId();
	d1.getSalary();
	d1.getDuration();
	
	d2.getName();
	d2.getId();
	d2.getSalary();
	d2.getDuration();

	d3.getName();
	d3.getId();
	d3.getSalary();
	d3.getDuration();

	d1.print();
	d2.print();
	d3.print();	
	
	
	
	
	
	
}
