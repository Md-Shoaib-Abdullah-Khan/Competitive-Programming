#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{int i,a=1;
for(i=1;i<=n;i++){a=a*i;}

return a;

}
int main()
{
    long long int ans=0,c=0,d=0,e,f,g,h,i,j,k,n,l,m,n1=0,n2=0,o,p,q,r,s,t,u,v,w,x,y,z;

        scanf("%lld",&n);

        long long int a[n],b[3];

        b[0]=0;
        b[1]=0;
        b[2]=0;


        for(i=0;i<n;i++)
        {
    scanf("%lld",&a[i]);
        }

        sort(a, a+n);

        for(i=0,j=0;i<n&&j<3;i++)
        {
        b[j]++;
        if(a[i]!=a[i+1]){j++;}
        }
        if(b[0]>=3)
        {
            c=(fact(b[0]))/(fact(b[0]-3)*6);
        }
        else
        {
            if(b[0]+b[1]>=3)
            {
                c=(fact(b[1]))/(fact(b[1]-(3-b[0]))*fact(3-b[0]));
            }
            else
            {
                c=(fact(b[2]))/(fact(b[2]-1));
            }
        }
        printf("%lld\n",c);

}
