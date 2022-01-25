// Problem Link: https://codeforces.com/contest/703/problem/A

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int m =0, c=0,a,b;
   for(int i=0;i<n;i++){
       cin>>a>>b;
       if(a>b){
           m++;
       }
       else if(a<b){
           c++;
       }
   }
   if(m==c){
       cout<<"Friendship is magic!^^";
   }
   else if(m>c){
       cout<<"Mishka";
   }
   else{
       cout<<"Chris";
   }
}
