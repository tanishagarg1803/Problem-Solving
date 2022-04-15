// Problem Link: https://codeforces.com/contest/1154/problem/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4],s=0;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2];
    
}
