#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    x=0;

    scanf("%lld%lld",&n,&x);

    c=2;
    i=1;
    while(1)
    {
        if(c>=n){break;}
        c+=x;
        i++;
    }
    printf("%lld\n",i);

    }

}
