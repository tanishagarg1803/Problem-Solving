// Problem Link: https://codeforces.com/contest/1409/problem/A

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c=0;
        cin>>a>>b;
        if(a==b){
            c=0;
        }
        else if(b<a){
            a=a-b;
            c=a/10;
            if(a%10!=0){
                c++;
            }
        }
        else{
            b=b-a;
            c=c+b/10;
            if(b%10!=0){
                c++;
            }
            
        }
        cout<<c<<endl;
    }
	return 0;
}
