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
#define mod                     200007
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

bool compare(const tuple<int, int, int>& a,
               const tuple<int, int, int>& b)
{
    return (get<2>(a) < get<2>(b));
}

    vector<ll> x[mod];

    ll a,b,ans1=0,ans2=0,cnt=0,A=0,B=0;
    bool cheacked[mod],check=false;


    void DFS(int n)
    {
        if(n==B)return;
        if(n==A)
        {
            check=true;
            return;
        }
        if(cheacked[n])return;

        //cout<<n<<endl;

        cheacked[n]=true;
        cnt++;

        for(int i=0;i<x[n].size();i++)
        {
            if(!cheacked[x[n][i]]) DFS(x[n][i]);
        }
        return;
    }

void solve()
{ ll i,j,k,n,m,c,d;

    ans1=0;
    ans2=0;

    cin>>n>>m>>a>>b;

    for(i=1;i<=n;i++) x[i].clear();

    memset(cheacked,false,sizeof(cheacked));

    for(i=0;i<m;i++)
    {
        cin>>c>>d;

       x[c].pb(d);
       x[d].pb(c);
    }

    for(i=0;i<x[a].size();i++)
    {
       A=b;
       B=a;
       check=false;
       DFS(x[a][i]);

       if(!check) ans1+=cnt;
       cnt=0;
    }

    for(i=0;i<x[b].size();i++)
    {
       A=a;
       B=b;
       check=false;
       DFS(x[b][i]);

       if(!check) ans2+=cnt;
       cnt=0;
    }

    cout<<ans1*ans2<<endl;



}
long long i,j,k,l,n,m,ma,y,r,c[567890],z,s,e,t,tt,x5,y5;


int main(){
    cin>>t;
    while(t--){solve();}
}


