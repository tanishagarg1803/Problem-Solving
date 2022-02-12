// Problem Link: https://codeforces.com/gym/102766/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s, t;
        cin>>s>>t;
        int k=s.size();
        string a = s.append(t);
        sort(a.begin(), a.end());
        for(int i=0;i<k;i++)
            cout<<a[i];
        cout<<endl;
    }
    return 0;
}
