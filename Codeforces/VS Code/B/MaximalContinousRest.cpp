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
    long long int n,m,i,j,y=0,w=0,r=0;

    cin>>n;
    long long int x[n];
    for( i =0;i<n;i++)
    {
        cin>>x[i];

    }

    int a=0,ans=0;
    for( i=0;i<n; i++)
    {

        if(x[i]==1)a++;
        else
        {
            ans = max(ans,a);
            a=0;
        }

    }
    a=0;
    for(i=0,j=n-1;i<n;)
    {
        if(x[i] == 1)
        {
            a++;
            i++;
        }
        if(x[j] == 1)
        {
            a++;
            j--;
        }
        if(x[i]==0 && x[j] ==0) break;
    }
    ans = max(ans,a);

    cout<<ans<<endl;

}
int main()
{

        solve();

}