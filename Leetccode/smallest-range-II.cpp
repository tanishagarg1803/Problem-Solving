// Problem Link: https://leetcode.com/problems/smallest-range-ii/

class Solution {
public:
    int smallestRangeII(vector<int>& arr, int k) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int small=arr[0]+k,large=arr[n-1]-k;
        int mini,maxi,temp=arr[n-1]-arr[0];
        for(int i=1;i<n;i++){
            
            mini=min(small,arr[i]-k);
            maxi=max(large,arr[i-1]+k);
            temp=min(temp,maxi-mini);
            
        }
        return temp;
    }
};
