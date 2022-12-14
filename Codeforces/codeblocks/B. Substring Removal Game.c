#include<stdio.h>

int main()
{
    long long int c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y,z;
    char x[105];
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {c=0;
        scanf("%s",&x);
        long long int a[strlen(x)];

        memset(x,0,sizeof(x));

    for(j=0,k=0;j<strlen(x);j++)
    {
        if(x[j]=='1'){a[k]++;}
        else{k++;}
    }
    sort(a,a+strlen(x));
    sort(a, a+strlen(x), greater<long long int>());
    if(k%2!=0){k++;}
    for(j=0;j<k;j++)
    {
       c=c+a[j];
    }
    printf("%lld\n",c);
    }
}
