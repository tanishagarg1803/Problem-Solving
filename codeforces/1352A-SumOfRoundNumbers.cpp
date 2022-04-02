// Problem Link: https://codeforces.com/contest/1352/problem/A

#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],i=0,j=0,c=0,b;
        while(n>0){
            if(n%10!=0){
                a[j]=n%10*pow(10,i);
                c++;
                j++;
            }
            i++;
            n=n/10;
        }
        cout<<c<<endl;
        for(int i=0;i<c;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}
