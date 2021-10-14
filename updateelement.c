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
	
	for(i=0 ; i<=pos ; i++)
	{
		a[pos-1] = ele;
	}
	
	for(i=0 ; i<size ; i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
