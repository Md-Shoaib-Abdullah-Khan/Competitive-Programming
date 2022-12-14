#include<bits/stdc++.h>

using namespace std;
void solve()
{
    long long int n,k,i,j,a,b,c;
    cin>>n;
    vector<pair<long long int , long long int>> x;
    vector<long long int> y;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        x.push_back(make_pair(a,b));
    }
    for(i=0;i<n;i++)
    {
        cin>>a;
        y.push_back(a);
    }
    long long int ans=0;
    for(i=0;i<n;i++)
    {
        if(i==0)a = x[i].first  + y[i] + ceil((double)(x[i].second-x[i].first)/2);
        else a = (x[i].first - x[i-1].second)  + y[i] + ceil((double)(x[i].second-x[i].first)/2);

        if(a + ans >= x[i].second)
        {
            ans += a;
            if(i==n-1) ans -= ceil((double)(x[n-1].second-x[n-1].first)/2);
        }
        else ans = x[i].second;
        //cout<<ans<<" "<<ceil((double)(x[i].second-x[i].first)/2)<<endl;
    }

    cout<<ans<<endl;

}

int main()
{
    int t;
    cin>>t;
        while(t--) solve();

}
