// Problem Link: https://codeforces.com/contest/677/problem/A

#include<iostream>
using namespace std;
int main()
{
    int n,h,c=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h){
            c=c+1;
        }
        else{
            c=c+2;
        }
    }
    cout<<c;
}
