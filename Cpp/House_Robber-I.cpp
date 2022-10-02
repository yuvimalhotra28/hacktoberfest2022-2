/*
Problem Statement
-------------------
You are a professional robber planning to rob houses 
along a street. Each house has a certain amount of money 
stashed, the only constraint stopping you from robbing each 
of them is that adjacent houses have security systems connected 
and it will automatically contact the police if two adjacent
houses were broken into on the same night.

Given an integer array nums representing the amount of money 
of each house, return the maximum amount of money you can rob 
tonight without alerting the police.

link - https://leetcode.com/problems/house-robber/
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int max_amount(vector<int>& nums){
    int n = nums.size();
    int dp[n][2];
    dp[0][0] = 0;
    dp[0][1] = 1;
    for(int i =1;i<n;i++){
        dp[i][0] = max(dp[i-1][0],dp[i-1][1]);
        dp[i][1] = nums[i]+dp[i-1][0];
    }
    return max(dp[n-1][0],dp[n-1][1]);
}
int main(){
    vector<int> nums = {4,10,2,12,11,3,14,19,13};
    cout<<max_amount(nums)<<"\n";
    return 0;
}