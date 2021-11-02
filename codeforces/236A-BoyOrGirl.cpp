// problem link : https://codeforces.com/contest/236/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    char a=s[0];
    int c=1;
    for(int i=0;s[i]!='\0';i++){
        if(a!=s[i]){
           c++;
           a=s[i];
        }
    }
    if(c%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
	// your code goes here
	return 0;
}
