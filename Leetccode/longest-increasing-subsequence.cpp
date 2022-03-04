// Problem Link: https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n=a.size();
        int dat[n];
        for(int i=0;i<n;i++){
            dat[i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[j]<a[i]){
                    dat[i]=max(dat[i],dat[j]+1);
                }
            }
        }
        return *max_element (dat,dat+n);
    }
};
