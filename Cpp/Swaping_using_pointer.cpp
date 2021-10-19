#include<iostream>
using namespace std;
main()
{
	int c,a,b,*p,*q;
	
	cout<<"Enter Value of A : ";
	cin>>a;
	
	cout<<"Enter Value of B : ";
	cin>>b;
	
	p = &a;
	q = &b;
	
	c = *p;
	*p = *q; 
	*q = c;
	
	cout<<"\nAfter Swapping\n";
	cout<<"A => "<<a<<" | "<<"B => "<<b;
	
	
}
