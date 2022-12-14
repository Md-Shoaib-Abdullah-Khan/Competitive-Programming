#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {c=0;
    n=0;
    scanf("%lld%lld",&a,&b);

    c=abs(b-a);
    n=c/10;
    if(c%10!=0){n++;}

        printf("%lld\n",n);

    }

}
