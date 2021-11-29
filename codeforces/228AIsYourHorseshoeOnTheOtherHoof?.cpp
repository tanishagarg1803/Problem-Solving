// problem link: https://codeforces.com/contest/228/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    set<int> s;
    int a;
    for(int i=0;i<4;i++){
        cin>>a;
        s.insert(a);
    }
    cout<<4-s.size();
	// your code goes here
	return 0;
}
