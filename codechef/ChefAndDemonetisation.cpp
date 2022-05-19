// Problem Link: https://www.codechef.com/LTIME85B/problems/CHFMOT18

#include <stdio.h>

int main(void) {
    int t,s,n,a,b,c;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        a=0,b=0,c=0;
        scanf("%d%d",&s,&n);
        a=s/n;
        b=s%n;
           if(b!=0){
            if(b%2==0)
            {
               c=1;
            }
            else if (b==1)
            {
               c=1;
            }
            else {
                c=2;
            }
          }
        printf("%d\n",a+c);
    }
	return 0;
}
