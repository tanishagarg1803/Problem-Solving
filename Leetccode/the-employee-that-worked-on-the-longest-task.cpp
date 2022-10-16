// Problem Link: https://leetcode.com/problems/the-employee-that-worked-on-the-longest-task/

class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int ans=logs[0][0],x,y=0;
        int cur=logs[0][1];
        for(auto i:logs){
            x=i[1];
            if(x-y==cur){
                ans=min(ans,i[0]);
            }
            if(x-y>cur){
                cur=x-y;
                ans=i[0];
            }
            y=x;
        }
        return ans;
    }
};
