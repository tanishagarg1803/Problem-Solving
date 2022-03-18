// Problem Link: https://codeforces.com/contest/1353/problem/B

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    long int t;
    cin>>t;
    while(t--){
         int n,k;
       cin>>n>>k;
        int a[n],b[n];
       long long s1=0;
       for(int i=0;i<n;i++){
           cin>>a[i];
           s1=s1+a[i];
       }
       for(int i=0;i<n;i++){
           cin>>b[i];
       }
       sort(a,a+n);
       sort(b,b+n);
       long int c=0;
       long int i=0,j=n-1;
       while(c<k&&i<n&&j<n){
           if(a[i]<b[j]){
               s1=s1-a[i]+b[j];
               swap(a[i],b[j]);
               c++;
               i++;
               j--;
           }
           else{
               i++;
               j--;
           }
       }
     cout<<s1<<endl;
   
    }
   	return 0;
}
