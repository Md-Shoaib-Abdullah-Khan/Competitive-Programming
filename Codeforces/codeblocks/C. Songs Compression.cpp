#include<bits/stdc++.h>

using namespace std;

# define inf 100000000


void solve()
{
    long long int i,j,n,m,sum=0,a,b,c;
    cin>>n>>m;
    vector<pair<long long int, long long int>> x;
    vector<long long int> z;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        x.push_back(make_pair(a,b));
        sum+= b;
        z.push_back(a-b);
    }
    sort(z.begin(),z.end());
    if(sum > m)
    {
        cout<<"-1"<<endl;
        return;
    }

    for(i=0;i<n;i++)
    {
        if(z[i]+sum <= m) sum += z[i];
        else break;
    }
    cout<<n-i<<endl;

}

int main()
{

      solve();

}
