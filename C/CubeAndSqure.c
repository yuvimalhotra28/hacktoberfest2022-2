#include<stdio.h>

int square(int n)
{
	return n*n;
}
int cube(int n)
{
	return n*n*n;
}

void main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	
	printf("square of %d is%d\n",n,square(n));
	printf("cube of %d is%d\n",n,cube(n));
	
}
