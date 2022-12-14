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
    long long int n,m,d,x,y,r;
    scanf("%lld%lld%lld%lld",&n,&m,&x,&y);

    r=fact(n+m)/(fact(n)*fact(m))-(fact(x+y)/(fact(x)*fact(y))*fact(m-x+n-y)/(fact(m-x)*fact(n-y)));

    printf("%lld\n",r);
}
