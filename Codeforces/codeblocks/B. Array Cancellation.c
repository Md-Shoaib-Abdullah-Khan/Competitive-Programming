#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    for(k=1;k<=t;k++)
    {c=0;
    d=0;
    scanf("%lld",&n);
    long long int x[n],y[n-1],z[n/2];
    for(i=0;i<n;i++)
        {
            scanf("%lld",&x[i]);
    if(((x[i]<=0&&x[i-1]<=0)||(x[i]>=0&&x[i-1]>=0)&&d))
        {x[i]=x[i]+x[i-1];
   x[i-1]=0;
    }
    else if((x[i]<=0&&x[i-1]>=0)&&d)
    {
    x[i]=x[i-1]+x[i];
    x[i-1]=0;
    }
    d=1;
    }
    for(i=0;i<n;i++)
    {
        if(x[i]>0){c+=x[i];}
    }

    printf("%lld\n",c);

    }

}
