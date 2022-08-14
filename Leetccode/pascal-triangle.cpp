// Problem Link: https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v(n);
        v[0].push_back(1);
        for(int i=1;i<n;i++){
            v[i].push_back(1);
            for(int j=1;j<i;j++){
                int a=v[i-1][j-1]+v[i-1][j];
                v[i].push_back(a);
            }
            v[i].push_back(1);
        }
        return v;
    }
};
