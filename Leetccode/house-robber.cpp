// Problem Link: https://leetcode.com/problems/house-robber/

class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int r1=0,r2=0;
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i]=0;
        }
        for(int i=0;i<n;i++){
            dp[i]=max(r1+nums[i],r2);
            r1=r2;
            r2=dp[i];
        }
        return dp[n-1];
    }
};
