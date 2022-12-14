#include<stdio.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {n=0;
    d=0;
        scanf("%lld%lld%lld",&l,&r,&m);

    d=m%l;
    for(j=l+1;j<=r;j++)
    {
        if(m%j<=d)
        {
            d=m%j;
            n=j;
        }
    }

    a=n;
    c=r-m%l;
    b=r;
    if(m<l)
    {
        n=b;
        b=c;
        c=n;
    }

            printf("%lld %lld %lld\n",a,b,c);
    }
}
