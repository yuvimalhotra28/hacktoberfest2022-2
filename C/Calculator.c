#include<stdio.h>


void sum(int x,int y);
void sub(int x,int y);
void mul(int x,int y);
void div(int x,int y);


void main()
{
	int a,b,c;
	
	printf("Enetr A : ");
	scanf("%d",&a);
	
	printf("Enetr B : ");
	scanf("%d",&b);
	
	printf("ENTER 1 FOR +\nENTER 2 FOR -\nENTER 3 FOR *\nENTER 4 FOR /\n");
	scanf("%d",&c);
	
	
	switch(c)
	{
		case 1:
			c=a+b;
			break;
		case 2:
			c=a-b;
			break;
		case 3:
			c=a*b;
			break;
		case 4:
			c=a/b;
			break;
			
	default:
	printf("enter valid value=%d\n",c);	
	}
	
	void sum(int x,int y)
	{
		int c;
		c=x+y;
	}
	void sub(int x,int y)
	{
		int c;
		c=x-y;
	}
	void mul(int x,int y)
	{
		int c;
		c=x*y;
	}
	void div(int x,int y)
	{
		int c;
		c=x/y;
	}
	printf("%d\n",c);
	
}
