// Problem Link: https://leetcode.com/problems/perfect-number/

class Solution {
public:
    bool checkPerfectNumber(int n) {
        int c=1;
        if(n==1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                if(i*i!=n){
                    c=c+i+n/i;
                }
                else{
                    c=c+i;
                }
            }
        }
        if(c==n){
            return true;
        }
        return false;
    }
};

