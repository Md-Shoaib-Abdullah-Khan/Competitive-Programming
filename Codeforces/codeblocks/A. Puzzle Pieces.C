#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,y,z;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {c=0;
    d=0;
    a=0;
        scanf("%lld",&n);
        long long int x[n];
        for(j=0;j<n;j++){scanf("%lld",&x[j]);}
     sort(x, x+n);
     for(j=1;j<n;j++)
    {
        if(x[j-1]==x[j]){c++;}
        else
        {
            d++;
            if(c>=a){a=c;}
        }
     }
     if(c==0&&d>1){printf("1\n");}
     else if(d==0&&c>1){printf("1\n");}
     else if(abs(c-d)==1)
     {
         if(c>d){printf("%lld\n",c);}
         else{printf("%lld\n",d);}
     }
     else if(c<d){printf("%lld\n",c++);}
     else if(d<c){printf("%lld\n",d);}
     else if(c==d){printf("%lld\n",c);}


    }
}
