// Problem Link: https://leetcode.com/problems/evaluate-reverse-polish-notation/description/

#define mo 998244353 
class Solution {
public:
    
    int evalRPN(vector<string>& tokens) {
        stack<long long int>st;
        for(int i = 0;i < tokens.size();i++){
            if(tokens[i] == "+"){
                long long int val1 = st.top();
                st.pop();
                long long int val2 = st.top();
                st.pop();
                long long int temp = (val1 + val2);
                st.push(temp);
            }
            else if(tokens[i] == "-"){
                long long int val1 = st.top();
                st.pop();
                long long int val2 = st.top();
                st.pop();
                long long int temp = (val2 - val1);
                st.push(temp);
            }
            else if(tokens[i] == "*"){
                long long int val1 = st.top();
                st.pop();
                long long int val2 = st.top();
                st.pop();
                long long int temp = (val1 * val2);
                st.push(temp);
            }
            else if(tokens[i] == "/"){
                long long int val1 = st.top();
                st.pop();
                long long int val2 = st.top();
                st.pop();
                long long int temp = (val2 / val1);
                st.push(temp);
            }
            else{
                string s = tokens[i];
                stringstream ss;
                long long int num;
                ss << s;
                ss >> num;
                st.push(num);
            }
        }
        return st.top();
    }
};
