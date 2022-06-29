// Problem Link: https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0,a=0;
        for(int i=0;s[i]!='\0';i++){
            if(int(s[i])==32){
                c=0;
            }
            else{
                c++;
            }
            if(c!=0){
                a=c;
            }
        }
        return a;
    }
};
