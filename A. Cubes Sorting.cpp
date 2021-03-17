#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {
    c=0;
    a=0;
    b=0;

    scanf("%lld",&n);
    long long int x[n],y[n],z[n];

    for(i=0;i<n;i++)
    {

        scanf("%lld",&x[i]);
        y[i]=x[i];
    }



    for(i=1;i<n;i++)
    {
    if(x[i]>=x[i-1])
    {
        a=1;
        break;
    }
    }
    if(a){printf("YES\n");}
    else{printf("NO\n");}



    }

}
