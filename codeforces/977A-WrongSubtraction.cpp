// Problem Link: https://codeforces.com/contest/977/problem/A

#include<iostream>
using namespace std;
int main()
{
    int n , k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
       int a;
       a=n%10;
       if(a==0)
       {
           n=n/10;
       }
       else{
           n=n-1;
       }
    }
    cout<<n;
}
