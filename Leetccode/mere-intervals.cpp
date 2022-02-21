// Problem Link: https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        int n=intervals.size();
        if(n==0){
            return v ;
        }
        sort(intervals.begin(),intervals.end());
        vector<int> temp=intervals[0];
        for(int i=0;i<n;i++){
            if(intervals[i][0]<=temp[1]){
                temp[1]=max(temp[1],intervals[i][1]);
            }
            else{
                v.push_back(temp);
                temp=intervals[i];
            }
        }
        v.push_back(temp);
        return v;
    }
};
