#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,ans,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;
    scanf("%lld",&t);
    while(t--)
    {ans=0;
    a=0;
    b=0;
    c=0;
    d=0;
        cin>>n;
         long long int x[n];
        for(i=0;i<n;i++)
            {
                cin>>x[i];
        if(x[i]%2==0){a++;}
        else{b++;}
        }

        cin>>m;
        long long int y[m];
        for(i=0;i<m;i++)
            {
                cin>>y[i];
        if(y[i]%2==0){c++;}
        else{d++;}
        }


        cout<<a*c+b*d<<endl;
    }

}
