#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<math.h>

using namespace std;

void solve()
{
   string x,y;
   char z[100];
   cin>>x;
    y = x;
    sort(y.begin(),y.end());
   cout<<y[0]<<" ";
   bool check =true;
   for(int i=0;i<x.size();i++)
   {
       if(x[i]==y[0] && check)
       {
           check = false;
       }
       else
       {
           cout<<x[i];
       }
   }
   cout<<endl;
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
