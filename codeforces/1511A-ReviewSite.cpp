// Problem Link: https://codeforces.com/contest/1511/problem/A

#include<iostream>
using namespace std;

int main(){
   long long int t;
    cin>>t;
    while(t--){
        long long int n,c=0;
        cin>>n;
        long long int a[n];
        for(long long int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1||a[i]==3){
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
