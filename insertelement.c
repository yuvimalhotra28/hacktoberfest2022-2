#include<stdio.h>
int main()
{
	int i,size,ele,pos;
	int a[100];
	
	printf("Enter the Size : ");
	scanf("%d",&size);
	
	for(i=0 ; i<size ; i++)
	{
		printf("element - %d = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter the Position : ");
	scanf("%d",&pos);
	
	printf("Enter the Element : ");
	scanf("%d",&ele);
	
	for(i=size-1 ; i>=pos ; i--)
	{
		a[i+1] = a[i];
	}
	
	a[pos] = ele;
	size++;
	
	for(i=0 ; i<size ; i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
