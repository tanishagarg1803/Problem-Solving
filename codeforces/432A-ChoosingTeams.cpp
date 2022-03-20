// Problem Link: https://codeforces.com/contest/432/problem/A

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    int c=5-k,d=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=c){
            d++;
        }
    }
    cout<<d/3;
	return 0;
}
