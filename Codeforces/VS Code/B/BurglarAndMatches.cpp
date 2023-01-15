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
    long long int n,m,y=0;
    vector<pair<long long int, long long int>> vec;
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(), vec.end(), sortbysecdesc);
    long long int ans=0;
    for(int i=0;i<m&&n>=0;i++)
    {
        if(n-vec[i].first >=0)
        {
            ans+= vec[i].first * vec[i].second;
            n-=vec[i].first;
        }
        else
        {
            ans+= n*vec[i].second;
            n-=vec[i].first;
        }
    }
    cout<<ans<<endl;

}
int main()
{

        solve();

}