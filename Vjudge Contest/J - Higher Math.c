#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,s,t,u,v,w,x,y,z,r;
    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {c=0;
        scanf("%lld%lld%lld",&a,&b,&c);

        if(a>b&&a>c)
        {
            x=a*a;
            y=b*b+c*c;
        }
        else if(b>a&&b>c)
        {
            x=b*b;
            y=a*a+c*c;
        }
        else
        {
            x=c*c;
            y=b*b+a*a;
        }
        if(x==y){printf("Case %lld: yes\n",i);}
        else{printf("Case %lld: no\n",i);}

    }
}
