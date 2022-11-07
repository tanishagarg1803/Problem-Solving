// Problem Link: https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        map<int,int> mp;
        // store all elements and their frequency in the map
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        // to find element having frequency more than 1
        for(auto x:mp){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        // to find element having frequency 0
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0)
                ans.push_back(i);
        }
    return ans;
    }
};
