//Problem Link: https://codeforces.com/contest/41/problem/A

#include<iostream>
using namespace std;
int main(){
    string s, a;
    cin>>s>>a;
    int n=s.size(),c=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=a[n-i-1]){
            c=1;
            break;
        }
    }
    if(c==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
