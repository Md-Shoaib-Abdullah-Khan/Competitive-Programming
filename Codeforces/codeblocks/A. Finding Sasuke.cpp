#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

#define INF 0x3f3f3f3f
int main()
{
    long long int a,b,c,t,i,j,k,n;
    cin>>t;
    while(t--)
    {cin>>n;
    long long int x[n];
    i=0;
        while(i!=n)
        {
            cin>>x[i];
            i++;
        }
        i=1;
        while(i!=n+1)
        {
            cout<<x[i]<<" "<<x[i-1]*(-1);
            if(i!=n-1){cout<<" ";}
            i+=2;
        }
        cout<<endl;
    }
    return 0;
}
