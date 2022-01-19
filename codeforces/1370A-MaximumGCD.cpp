// Problem Link: https://codeforces.com/contest/1370/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
   long long int t;
    cin>>t;
    while(t--){
      long long int n,maxi=0;
        cin>>n;
        /*for(long long int i=1;i<=n;i++){
            for(long long int j=i+1;j<=n;j++){
                maxi=max(maxi,__gcd(i,j));
            }
        }
        cout<<maxi<<endl;*/
        cout<<n/2<<endl;
        }
	// your code goes here
	return 0;
}
