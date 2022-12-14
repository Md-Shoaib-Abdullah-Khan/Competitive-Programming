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


        int main()
        {
        long long int n,i,j,ans1,a,c=0,d=0;
        bool ans=false;
        long long int t;
        cin>>t;
        while(t--)
        {c=1;
        long long int x;
        ans1=0;
        cin>>x;
        i=1,j=10000;
        while(c)
        {
            if(ans1+j*j*j<=x)
                {
                    ans1+=j*j*j;
                    c=0;

            }
            j--;
        }
        c=1;
        j=10000;
        while(c)
        {
            if(ans1+j*j*j<=x)
                {
                    ans1+=j*j*j;
                    c=0;

            }
            j--;
        }

        if(ans1==x&&j!=-1) cout<<"YES"<<endl;
        else {cout<<"NO"<<endl;}

        }
        }
