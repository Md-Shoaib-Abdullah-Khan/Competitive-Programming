#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,x,y,t,u,v,w;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {c=0;
    n=0;
    e=0;
    scanf("%lld%lld%lld%lld%lld",&a,&b,&x,&y,&n);
    c=a;
    d=b;
    if(a-n<x)
    {

        e=a-n;
        e=x-e;
        a=x;
        if(b-e<y){b=y;}
        else{b=b-e;}
    }
    else{a=a-n;}

        if(d-n<y)
    {

        e=d-n;
        e=y-e;
        d=y;
        if(c-e<x){c=x;}
        else{c=c-e;}
    }
    else{d=d-n;}


        if(a*b<=c*d) printf("%lld\n",a*b);

        else printf("%lld\n",c*d);

    }

}
