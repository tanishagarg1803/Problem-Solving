// Problem Link: https://codeforces.com/contest/155/problem/A

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n],max,min,c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            max=min=a[0];
        }
        if(a[i]>max){
            max=a[i];
            c++;
        }
        if(min>a[i]){
            min=a[i];
            c++;
        }
    }
    cout<<c;
	return 0;
}
