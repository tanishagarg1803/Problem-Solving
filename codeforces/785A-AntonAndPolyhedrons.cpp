// Problem Lnk: https://codeforces.com/contest/785/problem/A

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int s=0;
    while(n--){
        string c;
        cin>>c;
        if(c=="Icosahedron"){
            s=s+20;
        }
        else if(c=="Dodecahedron"){
            s=s+12;
        }
        else if(c=="Octahedron"){
            s=s+8;
        }
        else if(c=="Cube"){
            s=s+6;
        }
        else if(c=="Tetrahedron"){
            s=s+4;
        }
    }
    cout<<s;
	return 0;
}
