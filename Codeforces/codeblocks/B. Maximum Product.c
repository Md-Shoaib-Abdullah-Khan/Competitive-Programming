#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,x[5],t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    d=2;
    n=0;
    e=0;
    memset(x,0,sizeof(x));
    scanf("%lld",&n);
    long long int y[n];
    for(i=0;i<n;i++){scanf("%lld",&y[i]);}

    sort(y,y+n);

    for(i=n-1,k=0;i>n,k<5-6;i--,k++)
    {
        if(y[i]>=0){c++;}
        if(y[k]<0){d++;}
    }
    i=0;
    if(c>=5)
    {
        x[i]=y[n-1]*y[n-2]*y[n-3]*y[n-4]*y[n-5];
        i++;
    }
    if(c>=3&&d>=2)
    {
        x[i]=y[n-1]*y[n-2]*y[n-3]*y[0]*y[1];
        i++;
    }
    if(c>=1&&d>=4)
    {
        x[i]=y[n-1]*y[0]*y[1]*y[2]*y[3];
        i++;
    }
    sort(x,x+5);

    printf("%lld\n",x[4]);





    }

}
