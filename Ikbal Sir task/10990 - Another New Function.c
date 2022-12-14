#include<stdio.h>
#include<math.h>
#include<string.h>
int depthphi(int n)
{   int a=1,i,d=0,b=1;
    while(n>=2)
    {a=1;
    b=1;

    int c=n;

    for( i=2;i*i<=n&&n!=0;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
            }

            a=a*i;
            b=b*(i-1);

        }
    }
   if(n>1){ a*=n;
    b*=(n-1);}


    c=c/a;
    c=c*b;
    n=c;
    d++;
    }
    return d;

}

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {

    scanf("%lld%lld",&n,&m);
    for(i=n;i<=m;i++)
        {
            c+= depthphi(i);
    }



    printf("%lld\n",c);



    }

}
