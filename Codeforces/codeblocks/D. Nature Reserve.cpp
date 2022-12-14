    //#define test
    #include<bits/stdc++.h>
    using namespace std;
    const int Nmax=533333;
    typedef long long ll;

    const double eps=0.00000000001;

    int n;
    double x[Nmax],y[Nmax];
    char s[Nmax];
    int ckeck(double k)
    {
    	int i;
    	double l=-100000000000000000.0,r=100000000000000000.0,t;
    	for(i=1;i<=n;i++)
    	{
    		if(y[i]>k*2)
    			return 0;
    		t=sqrt(y[i]*(k*2-y[i]));
    		l=max(l,x[i]-t);
    		r=min(r,x[i]+t);
    	}
    	return l<r;
    }
    int main()
    {
    	int i;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
    		scanf("%lf %lf",&x[i],&y[i]);
        for(int i=1;i<=n;i++)
        {
            if(y[i]*y[n]<0)
                return 0*printf("-1\n");
    		else
    			y[i]=y[i]>0?y[i]:-y[i];

        }
    	double l=0,r=100000000000000000.0,m;
    	for(i=1;i<=100;i++)
    	{
    		m=(l+r)/2.0;
    		if(ckeck(m))
    			r=m;
    		else
    			l=m;
    	}
    	printf("%.10lf\n",m);
        return 0;
    }
