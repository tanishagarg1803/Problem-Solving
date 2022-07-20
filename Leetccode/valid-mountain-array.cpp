// Problem Link: https://leetcode.com/problems/valid-mountain-array/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3){
            return false;
        }
        int m=0,j;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                return false;
            }
        }
        for(int i=0;i<n;i++){
             if(m<arr[i]){
                m=arr[i];
                j=i;
            }
        }
        if(j==0|| j==n-1){
            return false;
        }
        for(int i=1;i<j;i++){
            if(arr[i]<arr[i-1]){
                return false;
            }
        }
        for(int i=j+1;i<n;i++){
            if(arr[i]>arr[i-1]){
                return false;
            }
        }
        return true;
    }
};
