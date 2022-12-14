#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {r=0;
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    if(b>=a){printf("%lld\n",b);}
    else
    {
        if(d>=c){printf("-1\n");}
        else
        {
            a=a-b;
            n=c-d;
            r=a/n;
            if(a%n!=0){r++;}
            r=r*c+b;
            printf("%lld\n",r);
        }
    }
    }
}
