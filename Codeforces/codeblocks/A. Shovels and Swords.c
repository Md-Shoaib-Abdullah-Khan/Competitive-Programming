#include<stdio.h>

int main()
{
    long long int a=0,b=0,c=0,d=0,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y,z;

    scanf("%lld",&n);
    char x[n];
    for(i=1,j=n-2;i<n,j>0;)
    {
        if(x[i-1]==x[i])
            {
                c++;
                i++;
        }
        else{a=1;}
        if(x[j+1]==x[i])
            {
                d++;
                j--;
        }
        else{b=1;}
        if(b&a){break;}
    }

    printf("%lld %lld",c,d);
}
