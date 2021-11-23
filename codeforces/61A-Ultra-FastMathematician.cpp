// Problem Link: https://codeforces.com/contest/61/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a, b ,c;
    cin>>a>>b;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==b[i]){
            c.append("0");
        }
        else{
            c.append("1");
        }
    }
    cout<<c;
	// your code goes here
	return 0;
}
