#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c=0,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,x[3],v,w;
    scanf("%lld%lld%lld",&x[0],&x[1],&x[2]);

    sort(x,x+3);
    if(x[0]+x[1]<=x[2]){cout<<x[2]-x[1]-x[0]+1<<endl;}
    else
    {
        cout<<0<<endl;
    }


}
