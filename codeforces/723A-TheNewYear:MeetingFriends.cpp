// Problem Link: https://codeforces.com/contest/723/problem/A

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    int s=abs(a[2]-a[0]);
    cout<<s;
}
