// Problem Link: https://codeforces.com/contest/1506/problem/A

#include<iostream>
using namespace std;
int main(){
   long long int t;
    cin>>t;
    while(t--){
        long long int n,m,x;
        cin>>n>>m>>x;
         x--;
    long long int c = x / n;
     long long int r = x % n;
    cout << r*m+c+1 << "\n";
    }
}
