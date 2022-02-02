// Problem Link: https://codeforces.com/contest/1343/problem/B

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
            for(int i=1;i<n-1;i+=2){
                cout<<i<<" ";
            }
            cout<<(n-1)+(n/2)<<endl;
        }
    }
	// your code goes here
	return 0;
}
