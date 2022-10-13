// Problem Link: https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/

class Solution {
public:
    int mod = 1e9 + 7;  
    long solve(int i, int k , int target, int sum,vector<vector<int>> &dp){
        if(i<1 && sum==target){
            return 1;
        }
        if(i<1) return 0;
        if(dp[i][sum]!=-1) return dp[i][sum]; 
        long temp =0;
        for(int j=1; j<=k; j++){
            temp += solve(i-1,k,target,sum+j,dp);
        }
        return dp[i][sum]= temp%mod;
    }
    
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n+1,vector<int>(1001,-1));
        return solve(n,k,target,0,dp);
    }
};
