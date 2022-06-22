// Problem Link: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else if(x==0)
        {
            return true;
        }   
        else{
            int n=x;
           long long int m=0;
            while(n!=0){
                int a=n%10;
                m=m*10+a;
                n=n/10;
            }
            if(m==x){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
