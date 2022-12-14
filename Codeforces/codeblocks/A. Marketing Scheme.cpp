#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,x[2],m,n,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {


    scanf("%lld%lld",&x[0],&x[1]);

    sort(x,x+2);
    a=x[1]+1;
    b=(x[0]+x[1])/2;
    c=x[1]/2+1;
    if(x[0]>=a){printf("YES\n");}
    else if(x[0]>=b/2&&x[1]%b>=b/2){printf("YES\n");}
    else if(x[0]%c>=c/2&&x[1]%c>=c/2){printf("YES\n");}
    else{printf("NO\n");}




    }

}
