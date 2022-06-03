// Problem link: https://codeforces.com/contest/617/problem/A

#include<iostream>
using namespace std;
int main()
{
    int x,c=0;
    cin>>x;
    int i=5;
    while(x!=0)
    {
        if(x>=i)
        {
            x=x-i;
            c++;
        }
        else{
            i=i-1;
        }
    }
    cout<<c;
    return 0;
}
