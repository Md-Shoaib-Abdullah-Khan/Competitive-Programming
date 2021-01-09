#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;

    scanf("%lld",&n);


    for(i=0;n;i++)
    {
    if(i%2==0)
    {
    if(n%2==0){c+=n/2;}

    else {c++;}

    }
    if(n%2==0)n/=2;

    else {n--;}
    }
    printf("%lld\n",c);
    }

}
