// Problem Link: https://codeforces.com/contest/231/problem/A

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[3];
    int d=0;
    while(n--)
    {int c=0;
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                c++;
            }
        }
        if(c>=2)
        {
            d++;
        }
    }
    cout<<d;
}
