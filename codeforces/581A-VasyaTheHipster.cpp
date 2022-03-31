// Problem Link: https://codeforces.com/contest/581/problem/A

#include<iostream>
using namespace std;
int main(){
    int a , b;
    cin>>a>>b;
    int c=a<b?a:b;
    a=a-c;
    b=b-c;
    int d=0;
    if(a>0){
        d=d+a/2;
    }
    if(b>0){
        d=d+b/2;
    }
    cout<<c<<" "<<d;
}
