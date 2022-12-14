#include<stdio.h>
#include<string.h>
#include<math.h>
long long int fact(long long int n)
{
    long long int a=1,i=1;
    for(;i<=n;i++){a=a*i;}
    return a;
}
int main()
{
    long long int ans=0,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,p1=0,p2=0,m1=0,m2=0,q=0,r,s,t,u,v,w,z;


    scanf("%lld",&n);

    for(i=5;i<=7&&i<=n;i++)
    {
        ans += fact(n)/(fact(n-i)*fact(i));
    }
    printf("%lld\n",ans);

}
