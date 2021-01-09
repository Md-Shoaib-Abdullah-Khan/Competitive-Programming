#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {
    c=1;
    scanf("%lld%lld",&n,&m);
    long long int x[n],y[n];

    for(i=0;i<n;i++)
    {

        scanf("%lld",&x[i]);

    }
        for(i=0;i<n;i++)
    {

        scanf("%lld",&y[i]);

    }



        for(i=0,k=n-1;i<n;i++,k--)
    {

        if(x[i]+y[k]>m)
        {
            printf("NO\n");
            c=0;
            break;
        }

    }
    if(c){printf("YES\n");}



    }

}
