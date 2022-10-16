// Problem Link: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        int n=pref.size();
        ans.push_back(pref[0]);
        int x;
        for(int i=1;i<n;i++){
            x=pref[i-1]^pref[i];
            ans.push_back(x); 
        }
        return ans;
    }
};
