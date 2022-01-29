// problem link: https://codeforces.com/contest/1462/problem/A

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i;
        cin>>n;
        vector<int> v;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(n%2!=0)
        {
            for(i=0;i<n/2;i++)
            {
                ans.push_back(v[i]);
                ans.push_back(v[n-i-1]);
            }
            ans.push_back(v[i]);
        }
        else
        {
            for(i=0;i<n/2;i++)
            {
                ans.push_back(v[i]);
                ans.push_back(v[n-i-1]);
            }
        }
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}
