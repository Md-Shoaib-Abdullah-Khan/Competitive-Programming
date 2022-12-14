
#include <iostream>
#include<string.h>
using namespace std;
char g[105][105];
int n,m;
void recursion(int i, int j) {
    if(i >= n || j >= m || i < 0 || j < 0)
        return;
    if(g[i][j] == '#')  return;
    g[i][j] = '#';
    recursion(i+1, j);
    recursion(i-1, j);
    recursion(i, j+1);
    recursion(i, j-1);

}
int main() {
    int t=0,cases = 0, i, j,cnt=1;
    char str[100];

    for(i=0;i<105;i++){g[i][0]='/0';}

     while(scanf("%d%d",&n,&m)==2)
        {

        for(i = 0; i < n; i++)
            {
                cin>>g[i];
            }

        int ans = 0;

        for(i = 0; i < n; i++)
           {
            for(j = 0; j < m; j++)
                {
                    if(g[i][j] == '-')
                    {
                        ans++, recursion(i, j);
                    }
                }
           }
           cout<<"Case "<<cnt<<": "<<ans<<endl;
           ans=0;
           cnt++;

    }
    return 0;
}
