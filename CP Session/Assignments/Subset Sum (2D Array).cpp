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
#define mod                     100000
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
    vector<ll> vec;
    vector<ll> Subsets;

    ll targ=0, n ,ans[10000][10000];

    void MCU()
    {
        Subsets.clear();
        Subsets.resize( targ+1 , 0 );



        for(ll i=1; i<=n ; i++)
        {
            for(ll j=1; j<=targ ; j++)
            {


                if(j - vec[i] >= 0)
                {
                    ans[i][j] = min(ans[i-1][j] , 1 + ans[i-1][j - vec[i]]);

                    if(1 + ans[i-1][j - vec[i]] <= mod) Subsets[j]++;
                }

                else if(i!=1) ans[i][j] = ans[i-1][j];


            }
        }
        return;
    }



void solve()
{long long int  i,j;

    ll a;



    vec.clear();

    cin>>n>>targ;


    for(i=0;i<=n;i++)
    {
        for(j=0;j<=targ;j++)
        {
            if(j==0)ans[i][j] = 0;
            else ans[i][j] = mod;
        }
    }
    vec.pb(0);
    for(i=1;i<=n;i++)
    {
        cin>>a;

        vec.pb(a);

    }

    sort(vec.begin() , vec.end());

    MCU();

     cout<<Subsets[targ]<<endl;


}



int main(){
    long long i,j,k,l,n,m,ma,y,r,c[567890],z,s,e,t,tt,x5,y5;

    cin>>t;
    while(t--)
    {
    solve();
    }
}
