// Problem Link: https://codeforces.com/contest/141/problem/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b,c,d;
    cin>>a>>b>>c;
    a.append(b);
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    if(a==c){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	return 0;
}
