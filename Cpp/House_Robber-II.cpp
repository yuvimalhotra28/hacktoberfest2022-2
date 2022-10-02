/*
You are a professional robber planning to rob houses 
along a street. Each house has a certain amount of money stashed. 
All houses at this place are arranged in a circle.
 That means the first house is the neighbor of the last one. 
 Meanwhile, adjacent houses have a security system connected, 
 and it will automatically contact the police if two adjacent 
 houses were broken into on the same night.

Given an integer array nums representing the amount of money of 
each house, return the maximum amount of money you can rob tonight 
without alerting the police.

link - https://leetcode.com/problems/house-robber-ii/
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int max_amount(vector<int>& nums,int l,int r){
    int n = nums.size();
    int dp[n][2];
    dp[l][0] = 0;
    dp[l][1] = nums[l];
    for(int i =l+1;i<=r;i++){
        dp[i][0] = max(dp[i-1][0],dp[i-1][1]);
        dp[i][1] = nums[i]+dp[i-1][0];
    }
    return max(dp[r][0],dp[r][1]);
}
int main(){
    vector<int> nums = {4,10,2,12,11,3,14,19,13};
    int n = nums.size();
    cout<<max(max_amount(nums , 0,n-2) , max_amount(nums, 1,n-1))<<"\n";
    return 0;
}