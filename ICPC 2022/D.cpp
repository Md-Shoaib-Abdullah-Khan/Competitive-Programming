#include<bits/stdc++.h>
using namespace std;


#pragma GCC                     optimize ("Ofast")
#pragma GCC                     optimize("O3")
#define db                      double
#define ll                      int
#define ull                     unsigned long long
#define lo(i,a,n,x)             for(i=a;i<=n;i=i+x)
#define loi(i,a,n,x)            for(i=a;i>=n;i=i-x)
#define sc                      scanf
#define pr                      printf
#define ms(a,b)                 memset(a, b, sizeof(a))
#define pb(a)                   push_back(a)

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
#define lcm(a, b)               (a)*((b)/__gcd(a,b))
#define end0                    "\n"
#define end1                    cout<<"\n";
#define Pi                      acos(-1)
#define mod                     1000000

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

bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[1] < v2[1];
}
bool compare(ll x, ll y){
    return x>y;
}

ll vis[mod], graph=1, cnt=0;
vector<ll> nodes[mod];
string s;
string pal[mod];

void BFS(ll source){
    queue<ll> q;
    q.push(source);
    vis[source] = 1;
    

    while(!q.empty()){
        ll curr_v = q.front();
        q.pop();
        for( ll child : nodes[curr_v]){
            if(!vis[child]) {
                vis[child] =1;
                q.push(child);
                pal[child-1] = pal[curr_v-1] + pal[child-1];
            }
        }
    }
}



void solve(){

 ll n,i,j;
 s.clear();
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++){
        nodes[i].clear();
        pal[i]=s[i];
    }
    memset(vis, 0, sizeof(vis));

 for(i=0; i<n-1; i++){
    ll a,b;
    cin>>a>>b;
    nodes[a].pb(b);
    nodes[b].pb(a);
 } 
 cnt=0;
 BFS(1);

    
 for(i=0;i<n;i++){
    string x = pal[i];
    reverse(x.begin(), x.end());
    if(x == pal[i])cnt++;
 }

 cout<<"Case "<<graph<<": "<<cnt<<"/"<<n<<endl;


    
}

int main()
{
    
   ll t;
  cin>>t;
   
    for( graph=1;graph<=t;graph++) solve();
}

