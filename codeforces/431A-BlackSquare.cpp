// Problem Link: https://codeforces.com/contest/431/problem/A

#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,o=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='1'){
            o=o+a;
        }
        else if(s[i]=='2'){
            o=o+b;
        }
        else if(s[i]=='3'){
            o=o+c;
        }
        else if(s[i]=='4'){
            o=o+d;
        }
    }
    cout<<o;
}
