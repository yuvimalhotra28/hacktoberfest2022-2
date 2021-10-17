#include<stdio.h>
int main(){
    int n,val,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter the element:");
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the target element:");
    scanf("%d",&val);
    int pos=-1,beg=0,end=n-1,mid;
    while(beg<=end){
        mid=(beg+end)/2;
        if(arr[mid]==val){
            pos=mid;
            printf("%d is found at index %d",val,pos);
            break;
        }
        else if(arr[mid]>val){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    if(pos==-1){
        printf("Value is not there in the array");
    }

}