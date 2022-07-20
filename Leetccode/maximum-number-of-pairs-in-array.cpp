// Problem Link: https://leetcode.com/problems/maximum-number-of-pairs-in-array/

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int> m;
        vector<int> ans;
        int n=nums.size();
        if(n==1){
            ans.push_back(0);
            ans.push_back(1);
           }  
        else{
            for(int i=0;i<n;i++){
                m[nums[i]]++;
            }
            int c=0,l=0;
            for(auto i:m){
                c=c+i.second/2;
                l=l+i.second%2;
            }
            ans.push_back(c);
            ans.push_back(l);
        }
        return ans;
    }
};
