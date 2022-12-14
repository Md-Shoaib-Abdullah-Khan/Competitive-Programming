#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    x=0;

    scanf("%lld%lld",&m,&n);

    long long int x[m][n],y[3];
    for(i=0;i<m;i++)
    {
        for(k=0;k<n;k++){scanf("%lld",&x[i][k]);}
    }

    for(e=0,f=m-1;e<=m/2&&f>=m/2;e++,f--)
    {
        for(a=0,b=n-1;a<=n/2&&b>=n/2;a++,b--)
        {
            y[0]=x[e][a];
            y[1]=x[e][b];
            y[2]=x[f][a];
            sort(y,y+3);
            c+=abs(x[e][a]-y[1])+abs(x[e][b]-y[1])+abs(x[f][a]-y[1]);
            x[e][b]=y[1];
            x[f][a]=y[1];
            x[e][a]=y[1];

            y[0]=x[f][a];
            y[1]=x[f][b];
            y[2]=x[e][a];
            sort(y,y+3);
            c+=abs(x[e][a]-y[1])+abs(x[f][b]-y[1])+abs(x[f][a]-y[1]);
            x[f][b]=y[1];
            x[f][a]=y[1];
            x[e][a]=y[1];

        }

    }

    printf("%lld\n",c);


    }

}
