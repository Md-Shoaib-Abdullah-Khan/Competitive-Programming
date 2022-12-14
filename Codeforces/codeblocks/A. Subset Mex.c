#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,x[105],t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    d=2;
    n=0;
    e=0;
    memset(x,0,sizeof(x));
    scanf("%lld",&n);
    long long int y[n];

    for(i=0;i<n;i++)
        {
            scanf("%lld",&y[i]);
    x[y[i]]++;
    }
    for(i=0;i<=100;i++)
    {
    if(x[i]==0)
        {
            c+=d*i;
            d-=2;;
        }
    else if(x[i]==1&&e==0)
        {
            c+=i;
            d-=1;
            e++;
        }

        if(d<=0){break;}
    }
    printf("%lld\n",c);






    }

}
