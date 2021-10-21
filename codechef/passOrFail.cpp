//Problem Link: https://www.codechef.com/START16C/problems/PASSORFAIL/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        int m=x*3+(n-x)*(-1);
        if(m>=p){
            cout<<"PASS"<<endl;
        }
        else{
            cout<<"FAIL"<<endl;
        }
    }
    
	// your code goes here
	return 0;
}
