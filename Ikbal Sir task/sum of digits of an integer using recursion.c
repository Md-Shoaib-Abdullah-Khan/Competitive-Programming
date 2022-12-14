#include<stdio.h>
#include<math.h>
#include<string.h>
long long int recursion(long long int n)
{
    if(n/10==0){return n;}
    else
    {
        return (n%10)+recursion(n/10);
    }
}


int main()
{
    long long int a=1,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    x=0;
    a=1;

    scanf("%lld",&n);


    c=recursion(n);

    printf("%lld\n",c);



    }

}
