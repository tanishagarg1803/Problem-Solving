//Problem link: https://www.codechef.com/START16C/problems/HCAGMAM1

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int c1=0,c2=0,c3=0;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='1'){
                c1++;
                c2++;
            }
            else{
                c3=c2>c3?c2:c3;
                c2=0;
            }
        }
         c3=c2>c3?c2:c3;
        //cout<<c1<<" "<<c2<<endl;
        int ans=c1*x+c3*y;
        cout<<ans<<endl;
    }
	return 0;
}
