// Problem Link: https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int n=INT_MAX;
        for(int i=0;i<strs.size();i++){
            if(n>strs[i].size()){
                n=strs[i].size();
            }
           // n=min(n,strs[i].size());
        }
        for(int i=0;i<n;i++){
            char a=strs[0][i];int c=1;
            for(int j=1;j<strs.size();j++){
                if(a==strs[j][i]){
                    c++;
                }
            }
            if(c==strs.size()){
                s=s+strs[0][i];
            }
            else{
                break;
            }
        }
        return s;
    }
};
