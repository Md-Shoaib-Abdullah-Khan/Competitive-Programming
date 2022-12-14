#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y,z;
    char x[105];
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {c=0;
        scanf("%s",&x);
        long long int a[strlen(x)];

        memset(a,0,sizeof(a));

    for(j=0,k=0;j<strlen(x);j++)
    {
        if(x[j]=='1'){a[k]++;}
        else{k++;}

    }
    sort(a, a+strlen(x), greater<long long int>());

    for(j=0,k=0;j<strlen(x);j++)
    {
       if(a[j]!=0){k++;}
    }




    for(j=0;j<k;j=j+2)
    {
       c=c+a[j];
    }
    printf("%lld\n",c);
    }
}
