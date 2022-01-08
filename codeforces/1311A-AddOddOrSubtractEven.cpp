// Problem Link: https://codeforces.com/contest/1311/problem/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b-a==0){
            cout<<0<<endl;
        }
        else if(b-a>0){
            if((b-a)%2==0){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else if(b-a<0){
            if((b-a)%2==0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }
}
