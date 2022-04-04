// Problem Link: https://codeforces.com/contest/1520/problem/A

#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        char temp=s[0];
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(temp==s[i])
                temp=s[i];
            else
            {
                for(int j=i+1;j<n;j++)
                {
                    if(temp==s[j])
                        flag=1;

                }
                temp=s[i];
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
