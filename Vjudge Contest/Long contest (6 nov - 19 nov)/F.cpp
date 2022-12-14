#include<bits/stdc++.h>

using namespace std;
void solve()
{
    long long int n,i,j,a,b,c;
    cin>>n;
    long long int x[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    long long int ans=0;
    for(i=1;i<n;i++)
    {
        if(x[i]>x[i-1])
        {
            ans=i;
            break;
        }
    }
    if(ans!=0)cout<<n-ans<<endl;
    else cout<<"0"<<endl;
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
