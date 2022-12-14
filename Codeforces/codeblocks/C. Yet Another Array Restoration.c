#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {
    a=1;
    b=1;

    scanf("%lld",&n);
    c=n;

        if(n%2==0)
        {
            while(1)
            {
                if(n%2!=0){break;}
                n=n/2;
            }

            a=a*2;
            b=b*(2-1);

        }


    for(i=3;i<=n&&n!=0;i+=2)
    {
        if(n%i==0)
        {
            while(1)
            {
                if(n%i!=0){break;}
                n=n/i;
            }

            a=a*i;
            b=b*(i-1);

        }
    }


    c=c/a;
    c=c*b;
    printf("%lld\n",c);



    }

}
