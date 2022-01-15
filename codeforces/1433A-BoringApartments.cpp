// problem link:https://codeforces.com/contest/1433/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
   long long int t;
    cin>>t;
    while(t--){
     int n,c=0,a;
     cin>>n;
     a=n%10;
     while(n!=0){
         n=n/10;
         c++;
     }
     if(c==1){
         cout<<((a-1)*10)+1<<endl;
     }
     else if(c==2){
         cout<<((a-1)*10)+3<<endl;
     }
     else if(c==3){
         cout<<((a-1)*10)+6<<endl;
     }
     else if(c==4){
         cout<<((a-1)*10)+10<<endl;
     }
    }
	// your code goes here
	return 0;
}
