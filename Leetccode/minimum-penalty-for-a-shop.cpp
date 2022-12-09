// Problem Link: https://leetcode.com/problems/minimum-penalty-for-a-shop/

class Solution {
public:
    int bestClosingTime(string c) {
        int n=c.length();
        int m=0,ind=0;
        pair<int,int> p={0,0};
        for(int i=0;i<n;i++){
            if(c[i]=='Y'){
                p.first++;
                p.second=i+1;
            }
            else{
                p.first--;
                p.second=i;
            }
            if(p.first>m){
                ind=p.second;
            }
            m=max(m,p.first);
        }
        return ind;
    }
};
