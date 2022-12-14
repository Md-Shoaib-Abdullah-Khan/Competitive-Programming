#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;

    for(j=1;;j++)
    {
    a=1;
    b=1;

    scanf("%lld",&n);
    if(n==0){break;}
    else if(n==1){printf("0\n");}
    else
    {
    c=n;

    for(i=2;i*i<=n&&n!=0;i++)
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
    printf("%lld\n",c);



    }
    }

}
