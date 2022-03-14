// Problem Link: https://codeforces.com/contest/1519/problem/A

#include<iostream>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
       long long int r,b,d;
        cin>>r>>b>>d;
       long long int a=r<b?r:b;
       long long int c=r+b-a;
        if(c<=(a*(d+1))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
