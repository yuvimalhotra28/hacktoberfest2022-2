#include<iostream>
using namespace std;
 main()
{
	int bill,unit,supchg;
	cout<<"enter unit = ";
	cin>>unit;
	
	if(unit < 50)
  {
  	 cout<<"your bill is free ";
  }
  else if(unit >=50 && unit <=100)
  {
     	bill = unit*10;
     	cout<<bill;
     		cout<<"\nyour total bill is "<<bill;
  }
  else if(unit >=100 && unit <=150)
  {
      bill = unit*15;
      cout<<bill;
      	cout<<"\nyour total bill is "<<bill;
  }
  else
  {
  	 bill = unit*20;
  	 supchg = bill+100;
  	 cout<<supchg;
	cout<<"\nyour total bill is "<<supchg;
  }
}
