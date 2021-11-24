// Problem Link: https://codeforces.com/contest/467/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a , b , c=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(b-a>=2){
            c++;
        }
    }
    cout<<c;
	// your code goes here
	return 0;
}
