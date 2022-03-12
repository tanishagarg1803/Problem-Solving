// Problem Link : https://codeforces.com/contest/1353/problem/A

#include <iostream>
using namespace std;
int main() {
    long int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1){
            cout<<0<<endl;
        }
        else if(n==2){
            cout<<k<<endl;
        }
        else{
            cout<<k*2<<endl;
        }
    }
	// your code goes here
	return 0;
}
