#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    d=0;
    scanf("%lld%lld",&n,&k);
    long long int x[n],y[n];

    for(i=0;i<n;i++)
    {
        scanf("%lld",&x[i]);
        y[i]=x[i];
    }


    sort(x, x+n);
    for(i=0;i<n;i++)
    {
       if(x[i]+x[i+1]>=k)
        {
            c=i;
       break;
       }
    }

    for(i=c;i<n-1;i++)
       {
           if(x[i]+x[i+1]==k&&x[i]==x[i+1])
           {
               d++;
           }
           else{break;}
       }
    d++;
    d=d/2;

    for(i=0;i<n;i++)
    {
        if(y[i]<x[c]){printf("0");}
        else if(y[i]>x[c]){printf("1");}
        else if(y[i]==x[c])
        {
           if(d)
           {
                printf("1");
                d--;
           }
           else if(d==0)
           {
                printf("0");
           }
           else{ printf("0");}

        }
        if(i!=n-1){printf(" ");}
    }

        printf("%\n");
    }

}
