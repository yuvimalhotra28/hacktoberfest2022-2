#include<iostream>
#include<algorithm>
using namespace std;


/*                       KADANE's ALGORITHM                        */

/* Kadane's algorithm is able to find the maximum sum of a contiguous subarray in an array with a runtime of O(n). */


int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n],negative=0;

    cout<<"Enter the elements of the array: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            negative++;
        }
    }

    int sum=0,ans=0;

    if(negative == n){
        ans=*max_element(arr,arr+n);
    }
    else {
        for(int i=0;i<n;i++){
            sum=max(arr[i],sum+arr[i]);
            ans=max(ans,sum);
        }
    }

    cout<<"Maximum sum: "<<ans<<"\n";
    
    
}
