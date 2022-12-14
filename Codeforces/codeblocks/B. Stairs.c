#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {

    c=0;
    d=0;
    a=0;
    scanf("%lld",&n);



    i=2;
    c=1;
  while(1)
  {
      if(c>n){break;}
      a++;
      c+=2*c+i*i;
      i++;

  }

    printf("%lld\n",a);









    }

}
