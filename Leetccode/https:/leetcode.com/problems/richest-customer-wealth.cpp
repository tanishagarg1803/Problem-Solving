// Problem Link:https://leetcode.com/problems/richest-customer-wealth/ 

class Solution {
public:
    int maximumWealth(vector<vector<int>>& ac) {
        int ans=0,s;
        for(int i=0;i<ac.size();i++){
            s=0;
            for(int j=0;j<ac[i].size();j++){
                s+=ac[i][j];
            }
            ans=max(ans,s);
        }
        return ans;
    }
};
