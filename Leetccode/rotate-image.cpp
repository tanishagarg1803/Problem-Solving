// Problem Link: https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void transpose(vector<vector<int>>& a){
        int n=a.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(a[i][j],a[j][i]);
            }
        }
    }
    void reverse(vector<vector<int>>& a){
        int n=a.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(a[i][j],a[i][n-1-j]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        reverse(matrix);
    }
};
