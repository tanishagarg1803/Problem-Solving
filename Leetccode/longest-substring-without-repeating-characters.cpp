// Problem Link:https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,l=0,r=0;
        int n=s.size();
        unordered_map<char,int> m;
        while(r<n){
            if(m.find(s[r])!=m.end()){
                l=max(l,m[s[r]]+1);
            }
            m[s[r]]=r;
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
