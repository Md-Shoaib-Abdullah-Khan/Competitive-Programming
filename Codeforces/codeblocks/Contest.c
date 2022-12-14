#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
   long long int x[n];
   for(j=0;j<n;j++){scanf("%lld",&x[j]);}
   c=abs(x[k]-x[j]);
   for(j=0;j<n;j++)
   {
       for(k=0;k<n&&k!=j;k++)
       {
           if(abs(x[j]-x[k])<=c){c=abs(x[j]-x[k]);}
       }
   }
   printf("%lld\n",c);
    }
}
