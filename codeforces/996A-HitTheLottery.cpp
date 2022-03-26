// Problem Link: https://codeforces.com/contest/996/problem/A

#include <iostream>
using namespace std;

int main() {
   int n,c=0;
   cin>>n;
   int a[5]={1,5,10,20,100};
   int i=4;
   while(n!=0){
       c=c+(n/a[i]);
       //cout<<c<<" "<<a[i]<<endl;
       n=n%a[i];
       i--;
   }
   cout<<c;
	return 0;
}
