// Problem Link:https://codeforces.com/contest/282/problem/A

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0;
    int y;
    string s;
   for(int i=0;i<n;i++)
   {
       cin>>s;
       if(s[0]=='X')
       {
           if(s[1]=='+')
           {
               if(n==1)
               {
                   y=x;
                   x=x+1;
               }
               else{
                x=x+1;
                y=x;
               }
           }
           else{
                x=x-1;
                y=x;

           }
       }
       else if(s[0]=='+')
       {
           x=x+1;
           y=x;
       }
       else if(s[0]=='-')
       {
           x=x-1;
           y=x;
       }

   }
   cout<<y;
}
