// problem link: https://codeforces.com/contest/1077/problem/A

#include<iostream>
using namespace std;

int main(){
   long long int t;
    cin>>t;
    while(t--){
          long long int a , b,n ,c;
        cin>>a>>b>>n;
        if(n%2==0){
            c=a*(n/2)- b *(n/2);
        }
        else{
            c=a*((n/2)+1)- b *(n/2);
        }
        cout<<c<<endl;
    }
    return 0;
}
