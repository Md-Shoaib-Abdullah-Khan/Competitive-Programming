#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s ,t,u,x,y,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    d=1;
    n=0;
    e=0;
    m=1;
    scanf("%lld%lld%lld",&x,&y,&n);

    c=n*y+n;


   if(c>x)
    {
        d+= (c-x)/(x-1);
  if((c-x)%(x-1)!=0){d++;}
   }

   d+=n;



    printf("%lld\n",d);



    }

}
