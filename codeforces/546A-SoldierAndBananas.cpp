// Problem Link: https://codeforces.com/contest/546/problem/A

#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int c=(k*w*(w+1))/2;
    c=c-n;
    if(c<0)
    cout<<0;
    else
    cout<<c;
}
