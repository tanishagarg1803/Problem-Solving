// Problem Link: https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n =grid[0].size();
        vector<vector<int>> ans( m , vector<int> (n, 0));
        vector<int> zrow(m);
        vector<int> orow(m);
        vector<int> zcol(n);
        vector<int> ocol(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0){
                    zrow[i]+=1;
                    zcol[j]+=1;
                }
                else{
                    orow[i]+=1;
                    ocol[j]+=1;
                }
            }        
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=orow[i]+ocol[j]-zrow[i]-zcol[j];
            }
        }
        return ans;
    }
};
