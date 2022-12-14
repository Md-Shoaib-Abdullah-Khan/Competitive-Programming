#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,x[5],o,p,q,r,s,y,t,u,v,w;
    scanf("%lld%lld%lld%lld%lld",&x[0],&x[1],&x[2],&x[3],&x[4]);

    sort(x,x+5);

    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4&&x[i];j++)
        {
            if(x[j]%x[i]==0&&x[i]!=0&&x[j]!=0){x[j]=0;}

        }
    }

    for(i=0;i<4;i++)
    {
        if(x[i]!=0){c+=x[4]/x[i];}

    }
    printf("%lld\n",c);






}
