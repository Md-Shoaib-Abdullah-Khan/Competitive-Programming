#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,z;

    long long int ans=0;

        scanf("%lld",&n);

    if(n%2!=0){ans=0;}
    else
    {
        n=n/2;
        ans=n/2;
        if(n%2==0){ans--;}
    }
    printf("%lld\n",ans);

}
