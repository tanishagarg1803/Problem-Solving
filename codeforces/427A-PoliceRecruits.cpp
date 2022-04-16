// Problem Link :https://codeforces.com/contest/427/problem/A

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0,c=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        s=s+a[i];
        if(s<0){
            s=0;
            c++;
        }
    }
    cout<<c;
}
