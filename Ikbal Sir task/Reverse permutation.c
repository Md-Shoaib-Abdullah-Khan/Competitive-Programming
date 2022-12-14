#include<stdio.h>

int main()
{
    long long int c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%lld",&n);
    long long int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);

    }

    for(i=0;i<n;i++)
    {
    b[a[i]-1]=i+1;
    }

    for(i=0;i<n;i++)
    {

        if(b[i]!=a[i])
        {
            c=1;
            break;
        }
    }
    if(c){printf("NO\n");}
    else{printf("YES\n");}
}
