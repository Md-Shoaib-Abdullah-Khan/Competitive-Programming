#include<stdio.h>
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {r=0;
    c=0;
    a=0;
    b=0;
        scanf("%lld",&n);
        for(j=n;j;j=j/10)
        {
            if(j%10!=0){c++;}
        }
        printf("%lld\n",c);
        for(j=0,k=n;j<c&&k;k=k/10)
        {
            a=k%10;
       if(a!=0)
        {
            l=1;
            m=b;
            while(m--)
            {
                l=l*10;
            }
        printf("%lld",a*l);
        if(j!=c-1){printf(" ");}
        j++;
        }

        b++;
        }
        printf("\n");


    }
}
