#include<bits/stdc++.h>
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





int main()
{
   ll a,b,d,e,f,g,h,i,j,k,l,m,n,o,R,p,q,r,t,u,v,w,z[6];

    cin>>n;
    ll x[n][5],y[n];
    for(i=0;i<n;i++)
    {
        cin>>x[i][0]>>x[i][1]>>x[i][2]>>x[i][3]>>x[i][4];
    }
    b=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i){continue;}
            for(k=0;k<n;k++)
            {   if(k==j||k==i){continue;}
                a=(x[j][0]-x[i][0])*(x[k][0]-x[i][0])+(x[j][1]-x[i][1])*(x[k][1]-x[i][1]);
                a+=(x[j][2]-x[i][2])*(x[k][2]-x[i][2])+(x[j][3]-x[i][3])*(x[k][3]-x[i][3])+(x[j][4]-x[i][4])*(x[k][4]-x[i][4]);
              if(a>0)
              {
                  y[b]=i;
                  b++;
              }
            }

        }
    }
      cout<<b<<endl;
            for(i=0;i<b;i++){cout<<y[i]<<endl;}



}
