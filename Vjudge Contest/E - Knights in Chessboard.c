#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y,z;
    scanf("%lld",&t);
    char x[10];
    for(i=1;i<=t;i++)
    {c=0;
        scanf("%lld" ,&n);

        for(j=0;j<n;j++)
        {
            scanf("%lld",&a);
            if(a>=0){c=c+a;}
        }
        printf("%lld\n",c);

    }
}
