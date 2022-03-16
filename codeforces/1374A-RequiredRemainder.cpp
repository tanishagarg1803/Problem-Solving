// Problem Link: https://codeforces.com/contest/1374/problem/A

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,n,i;
        cin>>x>>y>>n;
        if(n-n%x+y<=n)
            cout<<n-n%x+y<<endl;
        else
            cout<<n-n%x-(x-y)<<endl;
    }
   	return 0;
}
