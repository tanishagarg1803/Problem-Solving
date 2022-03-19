// Problem Link: https://codeforces.com/contest/758/problem/A

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n],max=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(max<a[i]){
            max=a[i];
        }
    }
    int s=0;
    for(int i=0;i<n;i++){
        s=s+(max-a[i]);
    }
    cout<<s;	return 0;
}
