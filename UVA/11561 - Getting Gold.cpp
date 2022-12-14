
#include <iostream>
#include<string.h>
using namespace std;
char g[55][55];
int n,m,ans=0;
void recursion(int i, int j) {

    if(g[i][j]=='#'||g[i][j]=='*')
        {return;}
    if(g[i][j] == 'G')
    {
        ans++;
    }
g[i][j]='*';
    if(g[i+1][j]=='T'||g[i][j+1]=='T'||g[i-1][j]=='T'||g[i][j-1]=='T')
        {return;}




    recursion(i+1, j);
    recursion(i-1, j);
    recursion(i, j+1);
    recursion(i, j-1);
}
int main() {
    int t=0,cases = 0, i, j;


        while(scanf("%d %d", &n, &m) == 2) {
        for(i = 0; i < m; i++)
            {
                cin>>g[i];
            }
        ans=0;
        cases=1;
        for(i = 0; i < m&&cases; i++)
           {
            for(j = 0; j < n; j++)
                {
                    if(g[i][j] == 'P')
                    {
                    recursion(i, j);
                    cout<<ans<<endl;
                    cases=0;
                    break;

                    }
                }
           }
}
}

