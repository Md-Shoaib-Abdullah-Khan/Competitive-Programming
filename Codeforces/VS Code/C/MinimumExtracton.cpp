#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,y=0;
    cin>>n;
    long long int x[n];
    for(int i =0; i<n;i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    if(n==1)
    {
        cout<<x[0]<<endl;
        return;
    }
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        ans = max(ans,x[i]-y);
        y+= x[i]-y;
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}