// Problem Link: https://codeforces.com/contest/1348/problem/A

#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    if(n==2){
        return 2;
    }
    return 2*solve(n-2)+2;
}
int main(){
   int t;
   cin>>t;
   while(t--){
       int n,s1=0,s2=0;
       cin>>n;
       int c=solve(n);
       cout<<c<<endl;
   }
   
}
