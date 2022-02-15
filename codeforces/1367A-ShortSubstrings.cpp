// Problem Link: https://codeforces.com/contest/1367/problem/A

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        for(int i=2;a[i]!='\0';i+=2){
            a[i]='#';
        }
      
        for(int i=0;a[i]!='\0';i++){
            if(a[i]!='#'){
                cout<<a[i];
            }
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}
