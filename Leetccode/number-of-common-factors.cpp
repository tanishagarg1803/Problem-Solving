// Problem Link:https://leetcode.com/problems/number-of-common-factors/

class Solution {
public:
    int commonFactors(int a, int b) {
        int x=a>b?b:a;
        int ans=1;
        for(int i=2;i<=x;i++){
            if(a%i==0 && b%i==0){
                ans++;
            }
        }
        return ans;
    }
};
