// Problem Link: https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int x) {
        int m=mat.size();
        int n=mat[0].size();
        int l=0,r=(m*n)-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(x<mat[mid/n][mid%n]){
                r=mid-1;
            }
            else if(x>mat[mid/n][mid%n]){
                l=mid+1;
            }
            else if(x==mat[mid/n][mid%n]){
                return true;
            }
        }
        return false;
    }
};
