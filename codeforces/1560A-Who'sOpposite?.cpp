// Problem Link: https://codeforces.com/contest/1560/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
     ll t;
     cin>> t;
     while(t--){
         ll a, b , c,d;
         cin>>a>>b>>c;
         ll n=abs(a-b);
         if(a<=2*n && b<=2*n && c<=2*n ){
             if(c<=n){
                 d=c+n;
                 if(d<=2*n)
                 cout<<d<<endl;
                 else
                 cout<<-1<<endl;
             }
             else{
                 d=c-n;
                 if(d<=2*n)
                 cout<<d<<endl;
                 else
                 cout<<-1<<endl;
             }
         }
         else{
             cout<<-1<<endl;
         }
     }
    
	// your code goes here
	return 0;
}
