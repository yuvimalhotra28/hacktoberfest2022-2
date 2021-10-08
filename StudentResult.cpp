#include<iostream>
using namespace std;

class Student
{
	protected :
			float id,m1,m2,m3;
			char name[50];
			
	public :
			void getData()
			{
				cout<<"Enter Student Id : ";
				cin>>id;
				
				cout<<"Enter Student Name : ";
				cin.ignore();
				cin.getline(name,50);
				//cin>>name;
				
				cout<<"Enter Maths Mark : ";
				cin>>m1;
				
				cout<<"Enter Physics Mark : ";
				cin>>m2;
				
				cout<<"Enter Chemistry Mark : ";
				cin>>m3;
				
			}		
};

class print : public Student
{
	float t;
	
	
	public :
		
	void setData()
	{
		cout<<endl<<"Id : "<<id<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Maths : "<<m1<<endl;
		cout<<"Physics : "<<m2<<endl;
		cout<<"Chemistry : "<<m3<<endl;
		
		t = (m1 + m2+ m3) / 3;
		cout<<"Total : "<<m1+m2+m3<<endl;
		
		cout<<"Result : "<<t;
		
	}
};

main()
{
	print p;
	
	p.getData();
	p.setData();
}
