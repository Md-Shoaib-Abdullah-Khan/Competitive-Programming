
#include <iostream>
#include<string.h>
using namespace std;
char g[105][105];
int n,m,k;
void recursion(int i, int j) {
    if(i >= k || j >= k || i < 0 || j < 0)
        return;

    if(g[i][j] == '1')  m++;
    if(g[i][j] == '0')  return;
    g[i][j] = '0';
    recursion(i+1, j);
    recursion(i-1, j);
    recursion(i, j+1);
    recursion(i, j-1);
    recursion(i+1, j+1);
    recursion(i-1, j-1);
    recursion(i-1, j+1);
    recursion(i+1, j-1);
}
int main() {
    int t=0,cases = 0, i, j;
        cin>>n;
        gets(g[0]);
    gets(g[0]);
     while(n--)
        {
        k=0;

        memset(g, 0, sizeof(g));

        while(gets(g[k])) {
            if(g[k][0] == '\0') break;
            k++;
        }

        int ans = 0;
        m=0;

        for(i = 0; i <=k; i++)
           {
            for(j = 0; j <=k; j++)
                {
                    if(g[i][j] == '1')
                    {
                        recursion(i, j);
                        if(m>ans){ans=m;}
                        m=0;
                    }
                }
           }
           cout<<ans<<endl;
           if(n!=1)cout<<endl;

    }
    return 0;
}
