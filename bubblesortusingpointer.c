#include<stdio.h>
int main()
{
	int i,size,a[100];
	int temp,j,*p;
	
	printf("Enter the Size : ");
	scanf("%d",&size);
	
	p=a;
	
	for(i=0 ; i<size ; i++)
	{
		scanf("%d",&*(p+i));
	}
	
	for(i=0 ; i<size ; i++)
	{
		for(j=i+1 ; j<size ; j++)
		{
			if(*(p+i) > *(p+j))
			{
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;	
			}
		}
	}
	printf("\n THE SORTED ELEMENTS.. \n");
	for(i=0 ; i<size ; i++)
	{
		printf("ptr[%d] = %d\n",i,*(p+i));
	}
}
