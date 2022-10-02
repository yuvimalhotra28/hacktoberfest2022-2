#include<bits/stdc++.h>
using namespace std;
#define ll long long

string binary_form(int a)
{
    string str;    
    while(a>0)
    {
        if(a&1==1) str.push_back('1');
        else str.push_back('0');     // indentifying if the number is odd or even 
           
        a = a>>1;               // shifting elements
    }                       //convert number to binary form and send as string

    reverse(str.begin(),str.end());
    return str;
}

int main()
{
    ios::sync_with_stdio(false);    // to speedup compliing...
    cin.tie(NULL);
    
    int n;
    cin >> n;   //Getting the input from user

    string binary = binary_form(n);    // calling function to get string
    cout << binary << endl;
    
}
