#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}

void solve()
{
    long long int a,n,m,i,j,z=0,w=0,r=0;

    cin>>n>>z;
    long long int x[n], y[105];
    memset(y,0,sizeof(y));
    for( i =0;i<n;i++)
    {
        cin>>a;
    y[a] = 1;
    //cout<<y[a]<<" "<<z<<" "<<a<<endl;
    }
    long long int ans=0;
    for( i =1;i<101;i++)
    {
        if(z==0 && y[i] ==0) break;
    if(y[i] == 0&& z!=0)
    {z--;
    ans++;
    }
    else if(y[i] !=0)ans++;


    //cout<<y[i]<<" "<<i<<" "<<z<<endl;



    }
    if(z!=0) ans+=z;


    cout<<ans<<endl;

}
int main()
{
int t;
cin>>t;
       while(t--) solve();

}