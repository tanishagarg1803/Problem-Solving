// Problem Link: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/

class Solution {
public:
    int minCostToMoveChips(vector<int>& p) {
        int o=0,e=0;;
         for(int i=0;i<p.size();i++){
             if(p[i]%2==0){
                 e++;
             }
             else{
                 o++;
             }
         }
        return min(e,o);
    }
};
