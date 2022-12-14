#include<stdio.h>
#include<math.h>


int main()
{
    long long int ans=0,n,c=0,m;
    scanf("%lld%lld",&n,&m);

    ans= pow(n,m);
    m=m/2;
    ans= ans- pow(n,m);

    printf("%lld\n",ans);
}
