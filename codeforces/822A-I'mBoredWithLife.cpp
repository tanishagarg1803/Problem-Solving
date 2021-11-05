// problem link: https://codeforces.com/contest/822/problem/A

#include<bits/stdc++.h>
using namespace std;

 long long int fact( long long int n){
     long long int f=1;
    for( long long int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int main(){
        long long int a,b,c;
        cin>>a>>b;
       c=fact(min(a,b));
        cout<<c<<endl;
    return 0;
}
