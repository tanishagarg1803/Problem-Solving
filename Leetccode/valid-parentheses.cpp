// Problem Link: https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
    int flag=1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(!st.empty()){
                if(s[i]==')' && st.top()=='('){
                    st.pop();
                }
                else if(s[i]==']' && st.top()=='['){
                    st.pop();
                }
                else if(s[i]=='}' && st.top()=='{'){
                    st.pop();
                }
                else{
                    flag=  0;
                    break;
                }
            }
            else{
                flag=  0;
                    break;
            }
        }
    }
    if(st.empty()){
        if(flag==0){
        return 0;
        }
        else{
        return 1;
        }
    }
    else{
        return 0;
    }
    }
};
