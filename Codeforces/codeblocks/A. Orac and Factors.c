#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {r=0;
        scanf("%lld%lld",&n,&k);
    if(n%2==0){printf("%lld\n",n+k*2);}
    else
    {
        for(j=2;j<=n;j++)
        {
            if(n%j==0){break;}
        }
        printf("%lld\n",n+j+(k-1)*2);
    }
    }
}
