#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;

    scanf("%lld%lld",&n,&k);
    long long int x[n];

    for(i=0;i<n;i++){scanf("%lld",&x[i]);}
    sort(x,x+n);

    for(i=n-2;i>=0&&k;i--)
    {
        x[n-1]+=x[i];
        x[i]=0;
        k--;
    }
    sort(x,x+n);
    printf("%lld\n",x[n-1]-x[0]);

    }

}
