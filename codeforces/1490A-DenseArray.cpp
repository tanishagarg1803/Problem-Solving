// Problem Link: https://codeforces.com/contest/1490/problem/A

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, temp=0;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]>2*v[i])
            {
                int var=v[i];
                while(v[i+1]>2*v[i])
                {
                    v[i]=2*v[i];
                    temp++;
                }
                v[i]=var;
            }
            if(v[i]>2*v[i+1])
            {
                int var=v[i+1];
                while(v[i]>2*v[i+1])
                {
                    v[i+1]=2*v[i+1];
                    temp++;
                }
                v[i+1]=var;
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}
