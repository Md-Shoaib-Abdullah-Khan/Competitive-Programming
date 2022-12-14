#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,n=0,h,w,j,i,k,c=0;

    scanf("%lld%lld",&n,&k);
     long long int x[n];
     for(i=0;i<n;i++){scanf("%lld",&x[i]);}
     c=x[0];
     if(k==0){printf("%lld\n",c);}
     else
     {
     for(i=0;i<k-1;i++)
     {
         c=x[c-1];
     }
          printf("%lld\n",c);
     }
    return 0;
}
