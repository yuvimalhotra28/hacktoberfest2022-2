#include<stdio.h>
#include<string.h>

int Sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+Sum(n-1);
	}
}
main()
{
	int n,l;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	l=Sum(n);
	printf("1 to %d Sum is  = %d",n,l);
}
