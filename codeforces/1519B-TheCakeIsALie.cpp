// Problem Link: https://codeforces.com/contest/1519/problem/B

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n,k;
        cin>>m>>n>>k;
        int x=1,y=1;
        int s=0;
        s=(m-1)*y+(n-1)*m;
        if(s==k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
