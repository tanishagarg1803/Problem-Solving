//Problem Link :https://codeforces.com/contest/1538/problem/A

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int &e : v){
            cin >> e;
        }
        int maxPos = max_element(v.begin(), v.end())-v.begin();
        int minPos = min_element(v.begin(), v.end())-v.begin();
        cout<<min({max(maxPos, minPos)+1, n-min(maxPos, minPos), n-maxPos+minPos+1, n-minPos+maxPos+1})<<endl;
    }
    return 0;
}
