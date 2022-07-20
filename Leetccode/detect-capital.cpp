// Problem Link: https://leetcode.com/problems/detect-capital/

class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=1;
        int n=word.size();
        if(word[0]>=65 && word[0]<=90){
            for(int i=1;word[i]!='\0';i++){
            if(word[i]>=65 && word[i]<=90){
                c++;
            }
            }
            if(c==1|| c==n){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            for(int i=1;word[i]!='\0';i++){
            if(word[i]>=65 && word[i]<=90){
                return false;
            }
           }
        }
        return true;
    }
};
