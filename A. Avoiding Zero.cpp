#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,y,t,u,v,w;
    scanf("%lld",&t);
    for(j=1;j<=t;j++)
    {c=0;
    a=0;
    b=0;


    scanf("%lld",&n);
    long long int x[n];

    for(i=0;i<n;i++)
    {
        scanf("%lld",&x[i]);
        c+=x[i];
        if(x[i]<0){a+=x[i];}
        else{b+=x[i];}
    }
    if(c==0){printf("NO\n");}
    else
    {   printf("YES\n");


        if(a+b>0)
        {sort(x,x+n,greater<int>());

               for(i=0;i<n;i++)
        {
            printf("%lld",x[i]);
            if(i!=n-1){printf(" ");}
        }
        printf("\n");
        }
        else

        {sort(x,x+n);

               for(i=0;i<n;i++)
        {
            printf("%lld",x[i]);
            if(i!=n-1){printf(" ");}
        }
        printf("\n");
        }


    }


    }

}
