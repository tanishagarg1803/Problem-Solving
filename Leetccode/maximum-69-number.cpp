// Problem Link: https://leetcode.com/problems/maximum-69-number/

class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='6'){
                s[i]='9';
                break;
            }
        }
        return stoi(s);
    }
};
