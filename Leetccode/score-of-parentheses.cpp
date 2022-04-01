// Problem Link: https://leetcode.com/problems/score-of-parentheses/

class Solution {
public:
    int scoreOfParentheses(string st) {
        int ans=0;
        stack<int> s;
        int n=st.length();
        for(int i=0;i<n;i++){
            if(st[i]=='('){
                s.push(-1);
            }
            else{
                if(s.top()==-1){
                    s.pop();
                    s.push(1);
                }
                else{
                    int sum=0;
                    while(s.top()!=-1){
                        sum=sum+s.top();
                        s.pop();
                    }
                    s.pop();
                    s.push(2*sum);
                }
            }
        }
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};
