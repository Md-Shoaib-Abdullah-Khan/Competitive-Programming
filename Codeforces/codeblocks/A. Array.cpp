#include<bits/stdc++.h>

using namespace std;

# define inf 100000000


void solve()
{
    long long int i,j,n,m,sum=0,a,b,c;
    cin>>n;
    vector<long long int> x;

    long long int pos=0,neg=0,zero=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        x.push_back(a);

        if(a>0) pos++;
        else if(a<0) neg++;
        else zero++;

    }
    sort(x.begin(),x.end());

    cout<<"1 "<<x[0]<<endl;
    x.erase(x.begin());
    if(pos==0)
    {
        cout<<"2 "<<x[0]<<" "<<x[1]<<endl;
        x.erase(x.begin());
    x.erase(x.begin());
    }
    else
    {
        cout<<"1 "<<x[x.size()-1]<<endl;
        x.pop_back();
    }
    cout<<x.size()<<" ";
    for(i=0;i<x.size();i++)
    {
        if(i!=0) cout<<" ";
        cout<<x[i];
    }
    cout<<endl;




   for(i=0;i<n;i++)
   {

   }

}

int main()
{

      solve();

}
