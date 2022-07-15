// Problem Link: https://leetcode.com/problems/merge-sorted-array/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0,k=0;
        vector<int>v;
        while(j<m&&k<n){
            if(nums1[j]<nums2[k]){
                v.push_back(nums1[j]);
                j++;
            }
            else{
                v.push_back(nums2[k]);
                k++;
            }
        }
        if(j<m){
            while(j<m){
                v.push_back(nums1[j]);
                j++;
            }
        }
        if(k<n){
            while(k<n){
                v.push_back(nums2[k]);
                k++;
            }
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=v[i];
        }
    }
};
