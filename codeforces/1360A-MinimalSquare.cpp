// Problem Link: https://codeforces.com/contest/1360/problem/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int s,l;
        if(a>b){
            l=a;s=b;
        }
        else{
            s=a;l=b;
        }
        if(2*s>=l){
            cout<<4*s*s<<endl;
        }
        else{
            cout<<l*l<<endl;
        }
    }
}
