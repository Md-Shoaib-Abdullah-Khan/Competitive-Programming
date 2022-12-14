#include<stdio.h>

int main()
{
    long long int c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int a[n];

    for(j=0;j<n;j++)
    {
        scanf("%lld",&a[j]);
    }

    if(a[0]+a[1]<=a[n-1]){printf("1 2 %lld\n",n);}
    else {printf("-1\n");}
    }
}
