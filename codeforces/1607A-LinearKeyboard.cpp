// Problem Link: https://codeforces.com/contest/1607/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,a;
    cin>>t;
    while(t--){
        a=0;
        string k,s;
        cin>>k>>s;
        for(int i=1;s[i]!='\0';i++){
            int c=k.find(s[i-1])+1;
            int d=k.find(s[i])+1;
            a=a+abs(c-d);
        }
        cout<<a<<endl;
    }
	// your code goes here
	return 0;
}
