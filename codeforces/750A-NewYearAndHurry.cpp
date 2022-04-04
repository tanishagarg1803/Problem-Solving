// Problem Link: https://codeforces.com/contest/750/problem/A

#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int c=240-k;
    int i=1,s=0,d=0;
   while(s<=c){
       s=s+i*5;
       i++;
       d++;
   }
   if(d-1<=n)
        cout<<d-1<<endl;
    else
        cout<<n<<endl;
	// your code goes here
	return 0;
}
