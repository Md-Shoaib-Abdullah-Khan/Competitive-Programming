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
        int n,m;
        int a,b,Y1[N],Y2[N],l[N];
        double sq(double x)
        {
            return x*x;
        }
        double cal(int i,int j)
        {
            return sqrt(sq(a)+sq(Y1[i]))+sqrt(sq(b-a)+sq(Y2[j]-Y1[i]))+l[j];
        }
        double get(int y)
        {
            if(y==0) return 0;
            return 1.*y/b*a;
        }
        int ts(int L,int R, int y)
        {
            int mid1 = L + (R-L)/3;
            int mid2 = R - (R-L)/3;

            if(Y1[mid1] == y){return mid1;}

            if(Y1[mid2] == y){return mid2;}

            if(mid1 >= mid2){return mid1;}

            if(Y1[mid1] > y){return ts(L,mid1-1,y);}

            if(Y1[mid2] < y){return ts(mid2+1,R,y);}

            return ts(mid1+1,mid2-1,y);
        }
        int main()
        {

            cin>>n>>m>>a>>b;
            for(int i=1;i<=n;i++) cin>>Y1[i];
            for(int i=1;i<=m;i++) cin>>Y2[i];
            for(int i=1;i<=m;i++) cin>>l[i];
            int ll,rr,p;
            int c=1;
            double res;
            for(int j=1;j<=m;j++)
            {
                int y=get(Y2[j]);
                p=ts(1,n,y);

                for(int i=max(1,p-2);i<=min(n,p+2);i++)
                {
                    double t=cal(i,j);
                    if(c){res=t;}

                    if(t<=res){ res=t,ll=i,rr=j;}

                    c=0;
                }

            }
            cout<<ll<<" "<<rr<<endl;
        }
