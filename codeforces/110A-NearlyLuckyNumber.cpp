// Problem Link:https://codeforces.com/contest/110/problem/A

#include <iostream>
using namespace std;
int main() {
   long long int n,c=0;
    cin>>n;
    while(n!=0){
      long long int a=n%10;
        n=n/10;
        if(a==4||a==7){
            c++;
        }
    }
    if(c==4||c==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
        }
    
	// your code goes here
	return 0;
}
