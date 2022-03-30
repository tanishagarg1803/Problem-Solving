//  Problem Link: https://codeforces.com/contest/1335/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n;
        if(n==0||n==1||n==2){
            c=0;
        }
        else{
        c=(n-1)/2;
        }
        cout<<c<<endl;
    }
  
	// your code goes here
	return 0;
}
