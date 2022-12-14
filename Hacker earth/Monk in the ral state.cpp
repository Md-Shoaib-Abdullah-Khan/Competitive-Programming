#include<iostream>
#include<string.h>
#include<set>

using namespace std;
#define M 20;
int main()
{
    int i,n,m,ans=0,t,a,b;
   cin>>t;
   for(int j=0;j<t;j++)
   {
    set <int> x;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a^b)x.insert(a^b);
    }
    cout<<x.size()<<endl;
   }
}

