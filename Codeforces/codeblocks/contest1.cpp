#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,r=0,e,f,i,t,j,k,l=0,m,n;

    cin>>n>>m;
    long long int x[n];
    for(j=0;j<n;j++)
    {
        cin>>x[j];
    }

 sort(x, x+n);
    for(i=n-1;i>=0&&c<m;i--)
    {

        if(x[i]<=m-c)
        {
            r=r+x[i]+((x[i]-1)*x[i])/2;
            c=c+x[i];
            e=1;
        }
        else
        {if(e==1)
        {
            d=m-c;
            r=r+d+((d-1)*d)/2;
            c=c+d;
        }
        else
        {
            d=m;
            a=x[i]-m+1;
            r=r+d*a+((d-1)*d)/2;
            c=c+d;

        }
        }


    }

        printf("%lld\n",r);

    return 0;
}
