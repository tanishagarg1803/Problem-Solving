// Problem Link: https://codeforces.com/contest/1549/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<2<<" "<<n-(n%2)<<endl;
    }
	// your code goes here
	return 0;
}
