// Problem Link: https://codeforces.com/contest/263/problem/A

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int a[6][6],c;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(a[i][j]==1)
            {
                c=abs(3-i)+abs(3-j);
            }
        }
    }
    cout<<c;
}
