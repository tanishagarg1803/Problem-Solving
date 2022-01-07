// Problem Link: https://codeforces.com/contest/707/problem/A

#include<iostream>
using namespace std;
int main(){
    int n , m,c=0;
    cin>>n>>m;
    char a;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a;
            if(a=='C'||a=='M'||a=='Y'){
                c=1;
            }
        }
    }
    if(c==0){
        cout<<"#Black&White";
    }
    else{
        cout<<"#Color";
    }
}
