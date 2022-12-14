#include<stdio.h>
#include<math.h>

int main()
{
    long long int a=0,b=0,c=0,d=0,e,f,g,h,i,j,k,n,l,m,n1=0,m1=0,o,p,q,r,s,t,u,v,w,x,y,z;

        scanf("%lld%lld",&n,&m);

    m1=m-1;
    n1=n-m1;
    c=(n1*(n1-1))/2;

    a=n/m;
    b=n%m;
    d=((a*(a-1))/2)*(m-b)+b*(((a+1)*a)/2);

        printf("%lld %lld\n",d,c);

}
