#include<bits/stdc++.h>

using namespace std;
void solve()
{
    long long int n,k,i,j,a,b,c;
    cin>>n>>k;
    vector<int> x;
    for(i=0;i<n;i++)
    {
        cin>>a;
        x.push_back(a);
    }
    sort(x.begin(),x.end());
     int index=0;

    if(n==k) cout<<x[n-1]<<endl;
    else if(k==0)
    {
       if(x[0]>1)cout<<"1"<<endl;
        else cout<<"-1"<<endl;
    }
    else if(x[k-1]!=x[k] )
    {
        cout<<x[k-1]<<endl;
    }
    else cout<<"-1"<<endl;
}

int main()
{
    int t;
    cout<<ceil(1)<<endl;
        solve();

}
