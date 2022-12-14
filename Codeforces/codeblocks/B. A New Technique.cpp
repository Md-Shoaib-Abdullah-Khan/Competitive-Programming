#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    long long int a,b,c,t,i,j,k,n,m;
    cin>>t;
    while(t--)
    {cin>>n>>m;
    long long int row[n*m+1],col[n*m+1],ans[n+1][m+1];
    for(i=1;i<n+1;i++)
    {
    for(j=1;j<m+1;j++)
     {
        scanf("%lld",&a);
        col[a]=j;
    }
    }
    for(i=1;i<m+1;i++)
    {
    for(j=1;j<n+1;j++)
     {
        scanf("%lld",&a);
        row[a]=j;
    }
    }
        for(i=1;i<n*m+1;i++)
    {
    ans[row[i]][col[i]]=i;
    }
    for(i=1;i<n+1;i++)
    {
    for(j=1;j<m+1;j++)
    {
        printf("%lld",ans[i][j]);
        if(j!=m){printf(" ");}
        else{printf("\n");}
    }
    }

    }
    return 0;
}
