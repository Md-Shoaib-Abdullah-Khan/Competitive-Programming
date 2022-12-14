
#include <iostream>
#include<string.h>
using namespace std;
char g[105][105];
int n;
void recursion(int i, int j) {
    if(i >= n || j >= n || i < 0 || j < 0)
        return;
    if(g[i][j] == '.')  return;
    g[i][j] = '.';
    recursion(i+1, j);
    recursion(i-1, j);
    recursion(i, j+1);
    recursion(i, j-1);
}
int main() {
    int t=0,cases = 0, i, j;
    cin>>t;
     for(int k=1;k<=t;k++)
        {
        cin>>n;
        for(i = 0; i < n; i++)
            {
                cin>>g[i];
            }

        int ans = 0;

        for(i = 0; i < n; i++)
           {
            for(j = 0; j < n; j++)
                {
                    if(g[i][j] == 'x')
                    {
                        ans++, recursion(i, j);
                    }
                }
           }
           cout<<"Case "<<k<<": "<<ans<<endl;

    }
    return 0;
}
