#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;


void solve()
{
   long long int i,j,a,b,c,d;
   vector<long long int> x;
   long long int n;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a;
       x.push_back(a);
   }
   sort(x.begin(),x.end());
   cout<<(x[x.size()-1] - x[0])*2<<endl;
}
int main()
{
    int t=0;

    cin>>t;
    while(t--)
    {
        solve();
    }
}
