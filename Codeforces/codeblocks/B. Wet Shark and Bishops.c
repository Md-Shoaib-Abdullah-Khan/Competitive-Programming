#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long int ans=0, a[1000][1000],d,c=0,e,f,g,h,i,j,k,l,m,n,o,p,p1=0,p2=0,m1=0,m2=0,q=0,r,s,t,u,v,w,z;

    memset(a,0,sizeof(a));

    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
    scanf("%lld%lld",&c,&d);
    c--;
    d--;
    a[c][d]++;

    }
    for(i=0,j=0;i<1000&&j<1000;j++)
    {c=0;
        for(k=i,l=j;k<1000&&l<1000;l++,k++)
        {
        c=c+a[k][l];
        }
        ans=ans+ (c*(c-1))/2;

    }
    for(i=0,j=0;i<1000&&j<1000;i++)
    {c=0;
        for(k=i,l=j;k<1000&&l<1000;l++,k++)
        {
        c=c+a[k][l];
        }
        ans=ans+ (c*(c-1))/2;

    }
    for(i=0,j=1000-1;i<1000&&j>=0;j--)
    {c=0;
        for(k=i,l=j;k<1000&&l>=0;l--,k++)
        {
        c=c+a[k][l];
        }
        ans=ans+ (c*(c-1))/2;

    }
        for(i=0,j=1000-1;i<1000&&j>=0;i++)
    {c=0;
        for(k=i,l=j;k<1000&&l>=0;l--,k++)
        {
        c=c+a[k][l];
        }
        ans=ans+ (c*(c-1))/2;

    }

    printf("%lld\n",ans);
}
