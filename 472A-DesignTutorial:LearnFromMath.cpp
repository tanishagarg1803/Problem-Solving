// Problem Link: https://codeforces.com/contest/472/problem/A

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<8<<" "<<n-8;
    }
    else{
     cout<<9<<" "<<n-9;   
    }
    return 0;
}
