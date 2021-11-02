// problem link: https://codeforces.com/contest/599/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
        long long int a,b,c,d=0;
        cin>>a>>b>>c;
        if(a<b){
            d=d+a;
            if(a+b<c){
                d=d+a+b;
            }
            else{
                d=d+c;
            }
            if(b<a+c){
                d=d+b;
            }
            else{
                d=d+a+c;
            }
        }
        else{
            d=d+b;
            if(a+b<c){
                d=d+a+b;
            }
            else{
                d=d+c;
            }
            if(a<b+c){
                d=d+a;
            }
            else{
                d=d+b+c;
            }
        }
        cout<<d<<endl;
           
    return 0;
}
