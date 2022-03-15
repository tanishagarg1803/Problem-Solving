// Problem Link: https://codeforces.com/gym/102767/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       long long int n , x;
        cin>>n>>x;
        long long int a[n];
        long long int s=(x*(x+1))/2;
         for(long long int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=x && a[i]>0){
                s=s-(2*a[i]);
            }
            
        }
        cout<<s<<endl;
    }
    
	// your code goes here
	return 0;
}
