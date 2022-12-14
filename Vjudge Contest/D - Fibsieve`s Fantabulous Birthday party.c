#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        j=2;
        a=1;
        while(1)
        {
            if(abs(n-a)<=(j/2+1))
            {
                c=j/2+1;
                d=c-(abs(n-a));
                if((j/2)%2==0)
                {
                    if(n<a)
                    {
                        e=c;
                        c=d;
                        d=e;
                    }
                }
                else
                {
                    if(n>a)
                    {
                        e=c;
                        c=d;
                        d=e;
                    }
                }
                printf("%lld %lld\n",c,d);
                break;
            }
                a=a+j;
        }

    }
}
