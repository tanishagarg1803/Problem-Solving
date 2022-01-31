// Problem Link: https://codeforces.com/contest/1343/problem/A

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,x,a;
        cin>>n;
        for( i=2;i<30;i++){
             a=(pow(2,i))-1;
            if(n%a==0){
                break;
            }
        }
            x=n/a;
        cout<<x<<endl;
    }
	// your code goes here
	return 0;
}
