// Problem Link: https://www.codechef.com/OCT21C/problems/MIXTURE/

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
          cin>>a>>b;
        if(a>0 && b>0){
            cout<<"Solution"<<endl;
        }
      
        else if(b==0){
            cout<<"Solid"<<endl;
        }
        else if(a==0){
            cout<<"Liquid"<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
