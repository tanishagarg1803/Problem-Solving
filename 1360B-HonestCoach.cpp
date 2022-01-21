//Problem Link: https://codeforces.com/contest/1360/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],mini=99999;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=1;i<n;i++){
           mini= min(mini,(a[i]-a[i-1]));
        }
        cout<<mini<<endl;
    }
	// your code goes here
	return 0;
}
