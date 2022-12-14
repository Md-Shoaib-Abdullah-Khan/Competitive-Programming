    #include<iostream>
    #include<algorithm>
    #include<math.h>
    using namespace std;

    double a[1000003],b[1000003],A,B,m;
    int n;
    double cost[1000003];
    int search(int V)
    {
    	int low = 1;
    	int high = n;
    	int mid;
    	while(low <= high)
    	{
    		mid = (low+high)/2;
    		if(a[mid] < V)
    				low = mid+1;
    		else
    				high = mid-1;
    	}
    	return low;
    }
    int ans[3];
    int main()
    {
    	cin >> n >> m >> A >> B;
    	for(int i = 1; i <= n; i++)
    			cin >> a[i];
    	for(int j = 1; j <= m; j++)
    			cin >> b[j];
    	for(int j=1; j <= m; j++)
    			cin >> cost[j];

    	double MIN = 1e9*1.0;

    	for(int i = 1 ; i <=m; i++)
    	{
    		// point p = (b,b[i]);

    		//slope with 0,0;
    		double Y = (b[i]*1.0/(B*1.0))*A*1.0;

    		int ind = search(int(Y));

    		for(int j = max(1,ind-10); j <=min(n,ind+10) ; j++)
    		{
    			if(j < 1 || j > n) continue;
    			// 0,0 -- A,a[i]--- B,b[i];

    			double D = sqrt((A-B)*(A-B) + (a[j]-b[i])*(a[j]-b[i])) + cost[i] + sqrt(A*A + a[j]*a[j]);

    			if(D < MIN)
    			{
    				MIN = D;
    				ans[0] = j;
    				ans[1] = i;
    			}
    		}
    	}
    	cout << ans[0] << " " << ans[1] << endl;

    }
