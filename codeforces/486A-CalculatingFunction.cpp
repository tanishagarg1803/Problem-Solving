// Problem Link: https://codeforces.com/contest/486/problem/A

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long a=n/2;
    if(n%2==0)
        {
       long long int o=a*a;
        long long int e=a*(a+1);
        cout<<e-o;
        }
    else
    {
  long long int o=(a+1)*(a+1);
   long long int e=(a)*(a+1);
   cout<<e-o;
    }
    return 0;
}
