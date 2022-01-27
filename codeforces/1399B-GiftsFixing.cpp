// Problem Link: https://codeforces.com/contest/1399/problem/B

#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
       long long int a[n],b[n],mini1=9999999999,mini2=9999999999,s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<mini1){
                mini1=a[i];
            }
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<mini2){
                mini2=b[i];
            }
        }
        for(int i=0;i<n;i++){
            s=s+max((a[i]-mini1),(b[i]-mini2));
        }
        cout<<s<<endl;
    }
}
