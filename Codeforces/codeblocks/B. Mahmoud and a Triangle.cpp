#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,ans,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w;

        cin>>n;
         long long int x[n];
        for(i=0;i<n;i++)
        {
            cin>>x[i];
        }
        sort(x,x+n);
        for(i=0;i<n-2;i++)
        {
            if(x[i]+x[i+1]>x[i+2])
                {
                    cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;


}
