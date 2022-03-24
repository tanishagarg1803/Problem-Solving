// Problem Link: https://codeforces.com/contest/136/problem/A

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        
        }
        for(int i=1;i<=n;i++){
            
            b[a[i]]=i;
        }
        for(int i=1;i<=n;i++){
            cout<<b[i]<<" ";
        }
	return 0;
}
