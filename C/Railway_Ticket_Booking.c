#include<stdio.h>
#include<conio.h>

struct train
{
	int age,ag[10],pase,men[10];
	long long no[10];

};

int main()
{
	int i,j,n,wo=0,aa=0,pass,total;
	
	struct train tic,aadhar[10];
	
	
	printf("Enter Your Password : ");
	scanf("%d",&pass);
	
if(pass == 1234)
{
	printf("\nSuccessFully Login \n\n");
	
	do
	{ system("cls");
			
		printf("\n\n1) Delhi To Ahemdabad JN  (21588) : 250 Rs \n");
		printf("2) Rajkot To Ahemdabad JN  ( 22588) : 300 Rs\n");
		printf("3) Ahemdabad To Surat JN  (23588) : 400 Rs\n");
		printf("4) Surat To Delhi  (24588) : 800 Rs\n");
		printf("5) Surat To Mumbai  (25588) : 500 Rs\n");
		printf("Press 0 For Exit");
	
		printf("\n\nEnter Your Choice Train Number : ");
		scanf("%d",&n);
		
		    printf("\n\nEnter Total Pasenger : ");
			scanf("%d",&tic.pase);
		
			printf("\n");
			
			for(i=0; i<tic.pase; i++)
		    {
//		    	printf("Enter %d Pasenger Aadhar No : ",i+1);
//		    	scanf("%lli",&aadhar[i].no[i]; 
		    	
		    	printf("Enter %d Pasenger Age : ",i+1);
		    	scanf("%d",&aadhar[i].ag[i]);
		    	
		    	printf("Enter %d Pasenger Gender  ",i+1);
		    	printf("\nPress 1 for Men \nPress 2 for Female : ");
		    	scanf("%d",&aadhar[i].men[i]);
		    	
		    	
			}
			
			for(i=0; i<tic.pase; i++)
			{
				if(aadhar[i].ag[i] > 60)
				{
					aa++;
				}
				else
				{
					if(aadhar[i].men[i] == 2)
					{
						wo++;
					}
				}
			}
			
			
		
		if(n == 21588)
		{
	    	total = tic.pase * 250 - aa * (250*50)/100 - wo*(250*25)/100;
	    	
	    	printf("\n------------------------------------------------------");
	    	printf("\n|               Total Amount is => %d               |",total);
	        printf("\n------------------------------------------------------\n\n");
	    
	    for(i=0; i<tic.pase; i++)
	    {
	    
	        printf("\n------------------------------------------------------");
		    printf("\n|                 Indian Railways                    |");
		    printf("\n|                                                    |");
			printf("\n| From : Delhi                     To : Ahemdabad JN |");
			printf("\n| Train Number : 21588                               |");
	        printf("\n|                                                    |");
	        printf("\n|  Pasengers : 1                  Age  : %d          |",aadhar[i].ag[i]);
	        printf("\n|                                                    |");
		    printf("\n|                                                    |",tic.pase);
		    printf("\n|  Total Amount => 250                               |",total);
		    printf("\n------------------------------------------------------");
		
	    } 
			
			
		}
		else if(n == 22588)
		{
	    	total = tic.pase * 300 - aa * (300*50)/100 - wo*(300*25)/100;
	    	
	    	printf("\n------------------------------------------------------");
	    	printf("\n|               Total Amount is => %d               |",total);
	        printf("\n------------------------------------------------------\n\n");
	    
	    for(i=0; i<tic.pase; i++)
	    {
	    
	        printf("\n------------------------------------------------------");
		    printf("\n|                 Indian Railways                    |");
		    printf("\n|                                                    |");
			printf("\n| From : Rajkot                    To : Ahemdabad JN |");
			printf("\n| Train Number : 22588                               |");
	        printf("\n|                                                    |");
	        printf("\n|  Pasengers : 1                    Age : %d         |",aadhar[i].ag[i]);
	        printf("\n|                                                    |");
		    printf("\n|                                                    |",tic.pase);
		    printf("\n|  Total Amount => 300                               |",total);
		    printf("\n------------------------------------------------------");
		
	    } 
	    
		}
		else if(n == 23588)
		{
	        total = tic.pase * 400 - aa * (400*50)/100 - wo*(400*25)/100;
	
	        printf("\n------------------------------------------------------");
	    	printf("\n|               Total Amount is => %d               |",total);
	        printf("\n------------------------------------------------------\n\n");
	        
		for(i=0; i<tic.pase; i++)
	    {
	    
	        printf("\n------------------------------------------------------");
		    printf("\n|                 Indian Railways                    |");
		    printf("\n|                                                    |");
			printf("\n| From : Ahemdabad                      To : Surat   |");
			printf("\n| Train Number : 23588                               |");
	        printf("\n|                                                    |");
	        printf("\n|  Pasengers : 1                     Age : %d        |",aadhar[i].ag[i]);
	        printf("\n|                                                    |");
		    printf("\n|                                                    |",tic.pase);
		    printf("\n|  Total Amount => 400                               |",total);
		    printf("\n------------------------------------------------------");
		
	    } 
	    
		}
		else if(n == 24588)
		{
	    	total = tic.pase * 800 - aa * (800*50)/100 - wo*(800*25)/100;
	    	
	    	printf("\n------------------------------------------------------");
	    	printf("\n|               Total Amount is => %d               |",total);
	        printf("\n------------------------------------------------------\n\n");
	    	
	    for(i=0; i<tic.pase; i++)
	    {
	    
	        printf("\n------------------------------------------------------");
		    printf("\n|                 Indian Railways                    |");
		    printf("\n|                                                    |");
			printf("\n| From : Surat                        To : Delhi     |");
			printf("\n| Train Number : 24588                               |");
	        printf("\n|                                                    |");
	        printf("\n|  Pasengers : 1                       Age : %d      |",aadhar[i].ag[i]);
	        printf("\n|                                                    |");
		    printf("\n|                                                    |",tic.pase);
		    printf("\n|  Total Amount => 400                               |",total);
		    printf("\n------------------------------------------------------");
		
	    } 
	    	
	    
		}
		else if(n == 25588)
		{
	    	total = tic.pase * 500 - aa * (500*50)/100 - wo*(500*25)/100;
	    	
	    	printf("\n------------------------------------------------------");
	    	printf("\n|               Total Amount is => %d               |",total);
	        printf("\n------------------------------------------------------\n\n");
	    	
	    for(i=0; i<tic.pase; i++)
	    {
	    
	        printf("\n------------------------------------------------------");
		    printf("\n|                 Indian Railways                    |");
		    printf("\n|                                                    |");
			printf("\n| From : Surat                        To : Mumbai    |");
			printf("\n| Train Number : 25588                               |");
	        printf("\n|                                                    |");
	        printf("\n|  Pasengers : 1                      Age : %d       |",aadhar[i].ag[i]);
	        printf("\n|                                                    |");
		    printf("\n|                                                    |",tic.pase);
		    printf("\n|  Total Amount => 500                               |",total);
		    printf("\n------------------------------------------------------");
		
	    } 
	    	
	    
	} 

		
		getch();
		
    }while(n != 0);
   
 }
 
	else
	{
		printf("\n\nInvalid Password....");
	}
	
	
	
	
	
	
}
