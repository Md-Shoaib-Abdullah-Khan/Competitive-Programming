#include<iostream>
#include<string.h>

using namespace std;
#define M 20;
int main()
{
    int i,n,m,ans=0;


    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        ans+=m;
    }
    if(2*(n-1)==ans){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}
}

