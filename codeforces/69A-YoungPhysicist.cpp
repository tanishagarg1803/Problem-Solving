//problem link: https://codeforces.com/contest/69/problem/A

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        a=a+x;
        b=b+y;
        c=c+z;
    }
    if(a==0 && b==0 &&c==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
