#include<bits/stdc++.h>
using namespace std;

const int N = 1000043;
vector<int> x[N];

int group[N];
int siz[N];
int n, m;
int groupNo = 0;
bool cheacked[N] = {false};

int dfs(int a)
{
    if(cheacked[a]) return 0;

    cheacked[a]=true;
    group[a] = groupNo;
    int ans=0;
    if(a<n) ans++;
	for(auto y : x[a])
    {
		ans += dfs(y);
    }
	return ans;
}

int main()
{
	scanf("%d %d", &n, &m);
	for(int i = 0; i < m; i++)
	{
		int k;
		scanf("%d", &k);
		for(int j = 0; j < k; j++)
		{
			int a;
			scanf("%d", &a);
			--a;
			x[a].push_back(i + n );
			x[i + n].push_back(a);
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(!cheacked[i])
		{
			groupNo++;
            siz[groupNo] = dfs(i);
		}
		printf("%d ", siz[group[i]]);
	}
}
