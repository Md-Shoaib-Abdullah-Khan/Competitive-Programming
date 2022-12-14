#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    for(k=1;k<=t;k++)
    {c=0;
    d=1;
    scanf("%lld",&n);
    long long int x[n],y[n-1],z[n/2];
    for(i=0;i<n;i++){scanf("%lld",&x[i]);}


    if(n%2==0)
    {c=0;
    d=1;
        for(i=0,j=0;i<n;j++,i+=2)
        {
            z[j]=abs(x[i]-x[i+1]);
        }
        for(i=0;i<n/2-1;i++)
        {
            if(z[i]!=z[i+1])
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            for(i=0;i<n;i+=2)
            {
                printf("%lld %lld",x[i+1],x[i]);
                if(i!=n-2){printf(" ");}

            }
            printf("\n");

            d=0;
        }
    }
    if(d)
    {
    for(i=0,j=0;i<n-1;j++,i++){y[j]=x[i]+x[i+1];}
    c=x[0]+x[n-1];
    for(i=1;i<n-2;i++)
    {
        if(x[i]+x[i+1]==c){break;}
    }
    i++;
    for(j=0;j<n;j++,i++)
    {
        if(i==n){i=0;}
        printf("%lld",x[i]);
        if(j!=n-1){printf(" ");}
    }
    printf("\n");
    }


    }

}
