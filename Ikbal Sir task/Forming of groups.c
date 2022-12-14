#include<stdio.h>
#include<math.h>

int fact(long long int a)
{   long long int n=1;
    for(int i=1;i<=a;i++)
    {
        n=n*i;
    }
    return n;
}

int main()
{
    long long int c=0,n,m,d,x,y,e,f,r,g,h,i,j,k,l,o,p,q,t,u;
    scanf("%lld",&n);


    for(i=n;i>0;i--)
    {
        c=c+i*((fact(n))/(fact(n-i)*fact(i)));
    }
    printf("%lld\n",c);
}
