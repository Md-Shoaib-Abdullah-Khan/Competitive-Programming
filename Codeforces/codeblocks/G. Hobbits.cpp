#include<bits/stdc++.h>
#include<vector>
using namespace std;


#pragma GCC                     optimize ("Ofast")
#pragma GCC                     optimize("O3")
#define db                      double
#define ll                      long long
#define ull                     unsigned long long
#define lo(i,a,n,x)             for(i=a;i<=n;i=i+x)
#define loi(i,a,n,x)            for(i=a;i>=n;i=i-x)
#define sc                      scanf
#define pr                      printf
#define ms(a,b)                 memset(a, b, sizeof(a))
#define pb(a)                   push_back(a)
#define pop()                   pop_back()
#define mp                      make_pair
#define VI                      vector <int>
#define PII                     pair <int,int>
#define PLL                     pair <long long,long long>
#define ff                      first
#define ss                      second
#define sqr(x)                  (x)*(x)
#define SZ(a)                   (int)a.size()
#define FAST_CIN                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define stlloop(v)              for(__typeof(v.begin()) it=v.begin();it!=v.end();it++)
#define UNIQUE(v)               (v).erase(unique((v).begin(),(v).end()),(v).end())
#define POPCOUNT(m)             __builtin_popcountll(m)
#define RIGHTMOST(m)            __builtin_ctzll(m)
#define LEFTMOST(x)             (63-__builtin_clzll((x)))
#define ODD(x)                  (((x)&1)==0?(0):(1))
#define TEST_CASE(t)            for(int love=1;love<=t;love++)
#define PRINT_CASE              printf("Case %d: ",love)
#define LINE_PRINT_CASE         printf("Case %d:\n",z)
#define all(a)                  a.begin(),a.end()
#define SORT(x)                 sort(x.begin(), x.end())
#define REV(x)                  reverse(x.begin(), x.end())
#define DBG0                    cerr << __LINE__ << ": ----" << '\n'
#define DBG(...)                cerr << __LINE__ <<':' << "(" << #__VA_ARGS__ << ")"<< " = ", dbg_out(__VA_ARGS__)
#define GCD(a, b)               __gcd(a, b)
#define lcm(a, b)               (a)*((b)/gcd(a,b))
#define end0                    "\n"
#define end1                    cout<<"\n";
#define Pi                      acos(-1)
#define mod                     1000000007
#define intlim                  2147483648
#define infinity                (1<<28)
#define EPS                     10E-9

//----------------------------------------------------------------
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
     dbg_out(T...);
}
//----------------------------------------------------------------




bool check(double x,double y,double ex,double ey)
{
    if(x*ey-ex*y>=0){return true;}
    else{return false;}
}



double dis(double x1,double y1,double x2,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

void solve()
{int i,h,n;
    double a1,b1,c1,a2,b2,c2,x1,y1,ans=0.0;
    int ex,ey;
    cin>>n>>h;

    vector<int>x;
    vector<int>y;
    for(i=0;i<n;i++)
    {
        cin>>ex>>ey;
        x.push_back(ex);
        y.push_back(ey);

    }
    ey+=h;
    for(i=0;i<n;i++)
    {

        x[i]=ex-x[i];
        y[i]=ey-y[i];

    }
    ex=x[n-2];
    ey=y[n-2];

    for(i=n-3;i>=0;i--)
    {

        if(check(x[i],y[i],ex,ey)&&check(x[i+1],y[i+1],ex,ey))
        {
            ans+=dis(x[i],y[i],x[i+1],y[i+1]);
            ex=x[i];
            ey=y[i];
        }
        else if(check(x[i],y[i],ex,ey)==true&&check(x[i+1],y[i+1],ex,ey)==false)
        {   a1=y[i]-y[i+1];
            b1=x[i+1]-x[i];
            c1=x[i]*y[i+1]-x[i+1]*y[i];

            a2=ey;
            b2=-ex;
            c2=0.0;

            x1=(b1*c2-b2*c1)/(a1*b2-b1*a2);
            y1=(a2*c1-a1*c2)/(a1*b2-b1*a2);

            ans+=dis(x[i],y[i],x1,y1);
            ex=x[i];
            ey=y[i];
        }

    }
    ans+=dis(x[n-2],y[n-2],x[n-1],y[n-1]);
    cout<<fixed<<setprecision(10)<<ans<<endl;






    return;


}

int main()
{

    solve();

}

