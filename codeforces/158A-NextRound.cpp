// Problem Link: https://codeforces.com/contest/158/problem/A

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d=a[k-1];
    for(int i=0;i<n;i++)
    {
        if((a[i]>=d)&&(a[i]>0))
        {
            c++;
        }
    }
    cout<<c;
}
