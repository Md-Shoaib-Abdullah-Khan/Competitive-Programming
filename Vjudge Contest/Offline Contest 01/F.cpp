#include<iostream>
using namespace std;

#define  ll long long
#define mod 10000000


void solve()
{   ll a,b=0,c,n,m,k,i,j;

    cin>>n>>m;
    char x[n+5];

    cin>>x;
    bool changed=false;
    if(x[n-1] == 'a') {
            x[n-1] = '\0';
        cout<<x<<endl;
        return;
    }
    else
    {
        x[n-1] = x[n-1] - 1;
    }

    cout<<x;
    for(i=0;i<m-n;i++)
    {
        cout<<"z";
    }
    cout<<endl;







}
int main()

{

    ll cnt;


        solve();


}
