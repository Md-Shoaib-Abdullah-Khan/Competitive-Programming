        #include<cstdio>
        #include<cctype>
        #include<iostream>
        #include<sstream>
        #include<cstring>
        #include<vector>
        #include<map>
        #include<queue>
        #include<set>
        #include<string>
        #include<cmath>
        #include<algorithm>

        #define N 100009
        #define inf 1000000009
        #define mod 1000000007
        using namespace std;

        int check(int i, int j)
        {
            if(i>j){swap(i,j);}

            int k=i,ans=0;
        while(k<j)
        {
            k*=2;
            ans++;
        }
        return ans-1;
        }

        int main()
        {
        int n,ans,a,c=0,d=0;
        int t;
        cin>>t;
        while(t--)
        {
            ans=0;
        vector<int> x;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            x.push_back(a);
        }

        for(int i=0;i<n-1;i++)
        {
            if(2*min(x[i],x[i+1])<max(x[i],x[i+1]))
            {
              ans+=check(x[i],x[i+1]);
            }
        }
        cout<<ans<<endl;
        }
        }