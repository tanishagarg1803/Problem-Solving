// Problem Link: https://leetcode.com/problems/minimum-cuts-to-divide-a-circle/

class Solution {
public:
    int numberOfCuts(int n) {
        if(n==1){
            return 0;
        }
        if(n%2==0){
            return n/2;
        }
        else{
            return n;
        }
    }
};
