
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    long long int a,b,c,t,i,j,k,n,m,a1,a2,a3,a4,a5,a6,ans;

  cin>>a1>>a2>>a3>>a4>>a5>>a6;

    ans= (a1+a2+a3)*(a1+a2+a3)-a1*a1-a3*a3-a5*a5;
    cout<<ans<<endl;
    return 0;
}
