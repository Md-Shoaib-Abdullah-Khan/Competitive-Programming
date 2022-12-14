#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,s,t,u,v,w;
    double x,y,z,r;
    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {c=0;
        scanf("%lf",&r);

        x=4*r*r-(double)2*acos(0.0)*r*r;
        printf("Case %lld: %.2lf\n",i,x);

    }
}
