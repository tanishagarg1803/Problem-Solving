// Problem Link :https://www.codechef.com/START16C/problems/DIRECTN

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=1;s[i]!='\0';i++){
            if(s[i]=='L' && s[i-1]=='L'){
                c=1;
                break;
            }
            else if(s[i]=='R' && s[i-1]=='R'){
                c=1;
                break;
            }
        }
        if(c==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
