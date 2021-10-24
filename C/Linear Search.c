#include<stdio.h>
int main(){
    int pos=-1,n,target;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the target element:");
    scanf("%d",&target);
    for (int i=0;i<n;i++){
        if(arr[i]==target) {
            pos = i;
        }
    }
    if(pos==-1){
        printf("The element is not present in the array");
    }
    else{
        printf("The element %d is at the index %d",target,pos);
    }


}