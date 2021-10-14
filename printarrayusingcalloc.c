#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int i,size;
	
	printf("Enter the Size : ");
	scanf("%d",&size);
	
	ptr = (int*)calloc(size,sizeof(int));
	
	if(ptr == '\0')
	{
		printf("The Merory is NULL.. ");
		exit(0);
	}
	else
	{
		printf("The POINTER SIZE IS ALLOCATED IN MEMORY USING CALLOC... \n\n",ptr);
		
		for(i=0 ; i<size ; i++)
		{
			scanf("%d",ptr+i);
		}
		for(i=0 ; i<size ; i++)
		{
			printf("%d, ",*(ptr+i));
		}
	}
}
