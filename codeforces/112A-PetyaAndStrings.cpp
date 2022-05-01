// Problem Link: https://codeforces.com/contest/112/problem/A

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int c;
    string a , b;
    cin>>a;
    cin>>b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a>b)
    {
        cout<<1;
    }
    else if(a<b)
    {
        cout<<-1;
    }
    else if(a==b)
    {
        cout<<0;
    }
}
