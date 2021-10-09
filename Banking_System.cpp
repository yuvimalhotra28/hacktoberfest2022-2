#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pass();

class Bank 
{
	private :
		int i,j,rup,acno,rupess,c,pin,copy=0,ce=0,b=0,m,date[10] = {22,23,24,25,26,27,28};
		char name[50];
		int count[10],bal[10];
		
	public :
		void getData()
		{
			
			cout<<"Do You Have Any Account In this Bank ? "<<endl;
			cout<<"Press 1 For Yes \nPress 2 For No ";
			cout<<"\nEnter Your Choice : ";
			cin>>c;
			
			if(c == 2)
			{
				cout<<"\nEnter The account No. :";
				cin>>acno;
				cout<<"\nEnter The Name of The account Holder : ";
				cin.ignore();
				cin.getline(name,50);
				cout<<"\nEnter The Initial amount : ";
				cin>>rupess;
				cout<<endl<<"Set Your Pin : ";
				cin>>pin;
				
				cout<<"\nAccount Created..";
				
				system("cls");
			}
			
		
				
			do
			{
				cout<<"\n\n************ Banking Systems ************"<<endl<<endl;
				cout<<"ENTER 1 FOR MOTA VARCHHA BRANCH "<<endl<<"ENTER 2 FOR NANA VARCHHA BRANCH"<<endl<<"ENTER 3 FOR KATARGRAM BRANCH "<<endl<<"ENTER 4 FOR VESU BRANCH"<<endl;
				cout<<"Enter Your Choice : ";
				cin>>i;
				
				system("cls");
				
				switch(i)
				{
					case 1:
						cout<<endl<<"ENTER 1 FOR DEBIT "<<endl<<"ENTER 2 FOR CREDIT "<<endl<<"ENTER 3 For Balance Inquiry "<<endl<<"ENTER 4 FOR Account Info"<<endl<<"ENTER 5 FOR PRINT PASSBOOK"<<endl;
						cout<<"Enter Your Choice : ";
						cin>>j;
						
						system("cls");
						
						if(j == 1)
						{
							cout<<"\nEnter Pin : ";
							cin>>copy;
							
							if(copy == pin)
							{
								count[ce] = rupess;
								
								cout<<"HOW MANY RUPESS ARE ENTER : ";
								cin>>rup;
								rupess=rupess+rup;
								
								cout<<endl<<endl<<"----------------------------------";
								cout<<"\n  Total Balance Is : "<<rupess<<endl;
								cout<<"----------------------------------";
								
								bal[b] = rup; 
								
								ce++;
								b++;
							
							}
							else
							{
								cout<<"Invalid Pin..";
							}
							getch();
							
							system("cls");
						}
						else if(j == 2)
						{
							cout<<"\nEnter Pin : ";
							cin>>copy;
							
							if(copy == pin)
							{
								count[ce] = rupess;
								
								cout<<"HOW MANY RUPESS ARE ENTER : ";
								cin>>rup;
								rupess=rupess - rup;
								
								cout<<endl<<endl<<"----------------------------------"<<endl;
								cout<<"  Total Balance Is : "<<rupess<<endl;
								cout<<"----------------------------------";
								
								bal[b] = rup; 
								
								ce++;
								b++;
							
							}
							else
							{
								cout<<"Invalid Pin..";
							}
							getch();
							
							system("cls");
						}
						else if(j == 3)
						{
							cout<<endl<<"------------------------------------------"<<endl;
							cout<<"|    Total Balance is => "<<rupess<<"           |"<<endl;
							cout<<"------------------------------------------"<<endl;
						}
						else if(j == 4)
						{
							cout<<endl<<"--------------------------------------------------"<<endl;
							cout<<"  Account No. : "<<acno<<endl;
							cout<<"  Account Holder Name : ";
							cout<<name<<endl;
							cout<<"  Balance amount : "<<rupess<<endl;
							cout<<"---------------------------------------------------"<<endl;
							
						}
						else if(j == 5)
						{
							cout<<"---------------------------------------------------------------------------------"<<endl;
							cout<<" Date              Balance                Credit/Debit              Total Balance"<<endl;
							cout<<"------------------------------------------------------------------------------------"<<endl;
						
							for(m=0; m<ce; m++)
							{
								cout<<date[m]<<"/01             "<<count[m]<<"                     "<<bal[m]<<" Debited                "<<count[m] + bal[m]<<endl<<endl;
							}
						}
						break;
				
					case 2:
						cout<<endl<<"ENTER 1 FOR DEBIT "<<endl<<"ENTER 2 FOR CREDIT "<<endl<<"ENTER 3 For Balance Inquiry "<<endl<<"ENTER 4 FOR Account Info"<<endl<<"ENTER 5 FOR PRINT PASSBOOK"<<endl;
						cout<<"Enter Your Choice : ";
						cin>>j;
						
						if(j == 1)
						{
							cout<<"\nEnter Pin : ";
							cin>>copy;
							
							if(copy == pin)
							{
								count[ce] = rupess;
								
								cout<<"HOW MANY RUPESS ARE ENTER : ";
								cin>>rup;
								rupess=rupess+rup;
								
								cout<<endl<<endl<<"----------------------------------";
								cout<<"\n  Total Balance Is : "<<rupess<<endl;
								cout<<"----------------------------------";
								
								bal[b] = rup; 
								
								ce++;
								b++;
							
							}
							else
							{
								cout<<"Invalid Pin..";
							}
							getch();
							
							system("cls");
						}
						else if(j == 2)
						{
							cout<<"\nEnter Pin : ";
							cin>>copy;
							
							if(copy == pin)
							{
								
								cout<<"HOW MANY RUPESS ARE ENTER : ";
								cin>>rup;
								rupess=rupess - rup;
								
								cout<<endl<<endl<<"----------------------------------";
								cout<<"\n Total Balance Is : "<<rupess<<endl;
								cout<<"----------------------------------";
							
							}
							else
							{
								cout<<"Invalid Pin..";
							}
							getch();
							
							system("cls");
						}
						else if(j == 3)
						{
							cout<<endl<<"------------------------------------------"<<endl;
							cout<<"|    Total Balance is => "<<rupess<<"           |"<<endl;
							cout<<"------------------------------------------"<<endl;
						}
						else if(j == 4)
						{
							cout<<endl<<"--------------------------------------------------"<<endl;
							cout<<"  Account No. : "<<acno<<endl;
							cout<<"  Account Holder Name : ";
							cout<<name<<endl;
							cout<<"  Balance amount : "<<rupess<<endl;
							cout<<"---------------------------------------------------"<<endl;
							
						}
						else if(j == 5)
						{
							cout<<"---------------------------------------------------------------------------------"<<endl;
							cout<<" Date              Balance                Credit/Debit              Total Balance"<<endl;
							cout<<"------------------------------------------------------------------------------------"<<endl;
						
							for(m=0; m<ce; m++)
							{
								cout<<date[m]<<"/01             "<<count[m]<<"                     "<<bal[m]<<" Debited                "<<count[m] + bal[m]<<endl<<endl;
							}
						}
						
						break;
					
					case 3:
						cout<<endl<<"ENTER 1 FOR DEBIT "<<endl<<"ENTER 2 FOR CREDIT "<<endl<<"ENTER 3 For Balance Inquiry "<<endl<<"ENTER 4 FOR Account Info"<<endl<<"ENTER 5 FOR PRINT PASSBOOK"<<endl;
						cout<<"Enter Your Choice : ";
						cin>>j;
						
						if(j == 1)
						{
							cout<<"\nEnter Pin : ";
							cin>>copy;
							
							if(copy == pin)
							{
								count[ce] = rupess;
								
								cout<<"HOW MANY RUPESS ARE ENTER : ";
								cin>>rup;
								rupess=rupess+rup;
								
								cout<<endl<<endl<<"----------------------------------";
								cout<<"\n  Total Balance Is : "<<rupess<<endl;
								cout<<"----------------------------------";
								
								bal[b] = rup; 
								
								ce++;
								b++;
							
							}
							else
							{
								cout<<"Invalid Pin..";
							}
							getch();
							
							system("cls");
						}
						else if(j == 2)
						{
							cout<<"\nEnter Pin : ";
							cin>>copy;
							
							if(copy == pin)
							{
								
								cout<<"HOW MANY RUPESS ARE ENTER : ";
								cin>>rup;
								rupess=rupess - rup;
								
								cout<<endl<<endl<<"----------------------------------";
								cout<<"\n  Total Balance Is : "<<rupess<<endl;
								cout<<"----------------------------------";
							
							}
							else
							{
								cout<<"Invalid Pin..";
							}
							getch();
							
							system("cls");
						}
						else if(j == 3)
						{
							cout<<endl<<"------------------------------------------"<<endl;
							cout<<"|    Total Balance is => "<<rupess<<"           |"<<endl;
							cout<<"------------------------------------------"<<endl;
						}
						else if(j == 4)
						{
							cout<<endl<<"--------------------------------------------------"<<endl;
							cout<<"  Account No. : "<<acno<<endl;
							cout<<"  Account Holder Name : ";
							cout<<name<<endl;
							cout<<"  Balance amount : "<<rupess<<endl;
							cout<<"---------------------------------------------------"<<endl;
							
						}
						else if(j == 5)
						{
							cout<<"---------------------------------------------------------------------------------"<<endl;
							cout<<" Date              Balance                Credit/Debit              Total Balance"<<endl;
							cout<<"------------------------------------------------------------------------------------"<<endl;
						
							for(m=0; m<ce; m++)
							{
								cout<<date[m]<<"/01             "<<count[m]<<"                     "<<bal[m]<<" Debited                "<<count[m] + bal[m]<<endl<<endl;
							}
						}
						
						break;
					
					case 4:
						cout<<endl<<"ENTER 1 FOR DEBIT "<<endl<<"ENTER 2 FOR CREDIT "<<endl<<"ENTER 3 For Balance Inquiry "<<endl<<"ENTER 4 FOR Account Info"<<endl<<"ENTER 5 FOR PRINT PASSBOOK"<<endl;
						cout<<"Enter Your Choice : ";
						cin>>j;
						
						if(j == 1)
						{
							cout<<"\nEnter Pin : ";
							cin>>copy;
							
							if(copy == pin)
							{
								count[ce] = rupess;
								
								cout<<"HOW MANY RUPESS ARE ENTER : ";
								cin>>rup;
								rupess=rupess+rup;
								
								cout<<endl<<endl<<"----------------------------------";
								cout<<"\n  Total Balance Is : "<<rupess<<endl;
								cout<<"----------------------------------";
								
								bal[b] = rup; 
								
								ce++;
								b++;
							
							}
							else
							{
								cout<<"Invalid Pin..";
							}
							getch();
							
							system("cls");
						}
						else if(j == 2)
						{
							cout<<"\nEnter Pin : ";
							cin>>copy;
							
							if(copy == pin)
							{
								
								cout<<"HOW MANY RUPESS ARE ENTER : ";
								cin>>rup;
								rupess=rupess - rup;
								
								cout<<endl<<endl<<"----------------------------------";
								cout<<"\n  Total Balance Is : "<<rupess<<endl;
								cout<<"----------------------------------";
							
							}
							else
							{
								cout<<"Invalid Pin..";
							}
							getch();
							
							system("cls");
							
						}
						else if(j == 3)
						{
							cout<<endl<<"------------------------------------------"<<endl;
							cout<<"|    Total Balance is => "<<rupess<<"           |"<<endl;
							cout<<"------------------------------------------"<<endl;
						}
						else if(j == 4)
						{
							cout<<endl<<"--------------------------------------------------"<<endl;
							cout<<"  Account No. : "<<acno<<endl;
							cout<<"  Account Holder Name : ";
							cout<<name<<endl;
							cout<<"  Balance amount : "<<rupess<<endl;
							cout<<"---------------------------------------------------"<<endl;
							
						}
						else if(j == 5)
						{
							cout<<"---------------------------------------------------------------------------------"<<endl;
							cout<<" Date              Balance                Credit/Debit              Total Balance"<<endl;
							cout<<"------------------------------------------------------------------------------------"<<endl;
						
							for(m=0; m<ce; m++)
							{
								cout<<date[m]<<"/01             "<<count[m]<<"                     "<<bal[m]<<" Debited                "<<count[m] + bal[m]<<endl<<endl;
							}
						}
						
						break;
					case 5:
//							
						exit(0);
						break;
									
				}
			}while(i!=0);
			
			
		} //getData end
		
		
	
};


int main()
{
	
	Bank a1;
	a1.getData();

}
