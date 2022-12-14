#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100],ans=0,b=0,c=1,d=1,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y,z;

    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {
        c=0;
        memset(a,0,sizeof(a));
    scanf("%lld",&n);
    for(j=0;j<n;j++)
    {
        scanf("%lld",&m);
        a[j]=m;;
    }


     sort(a, a + 100, greater<int>());
    for(j=0;j<n&&a[j];j++)
    {if(a[j+2]==0||j+2==n){break;}
    if(a[j]-a[j+1]>=0){a[j+1]=a[j]-a[j+1];}
    else if(a[j]-a[j+1]<0)
    {
        a[j+1]=a[j+1]-a[j];
        c++;

    }
    }

    if(c%2!=0)
        {
            if(a[j]-a[j+1]>=0){printf("HL\n");}
            else{printf("T\n");}
        }
    else{

            if(a[j]-a[j+1]>=0){printf("T\n");}
            else{printf("HL\n");}
    }
    }
}
