#include<stdio.h>
#include<math.h>
#include<string.h>
long long int recursion(long long int n, long long int a)
{
    if(n/10==0){return n;}
    else
    {
        return a*(n%10)+recursion(n/10,a/10);
    }
}


int main()
{
    long long int a=1,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    x=0;
    a=1;

    scanf("%lld",&n);
    m=n;
    while(m)
    {
        m=m/10;
        a=a*10;
    }

    c=recursion(n,a/10);
    if(c==n){printf("YES\n");}
    else{printf("NO\n");}



    }

}
