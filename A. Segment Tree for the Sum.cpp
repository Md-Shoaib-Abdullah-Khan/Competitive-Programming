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
#define inf                     1000007
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

const ll N = 1e5 + 5;

ll b[4*N];
ll a[N];

void build(ll l, ll r, ll node){
  if(l == r){
    b[node] = a[l];
    return;
  }
  ll mid = (l + r)/2;
  ll n1 = 2*node;
  ll n2 = n1 + 1;
  build(l , mid , n1);
  build(mid + 1, r, n2);
  b[node] = min(b[n1] , b[n2]);
  return;
}
ll get(ll l, ll r, ll node, ll x, ll y){
  if(x > r || y < l) return inf;
  if(x <= l && y >= r) return b[node];
  ll mid = (l + r)/2;
  ll n1 = 2*node;
  ll n2 = n1 + 1;
  return min(get(l , mid , n1, x , y) , get(mid+1, r, n2, x , y) );
}

void up(ll l, ll r, ll node, ll x, ll v){

  if(x < l || r < x) return; // type 1

  if(l == r){ // type 3
    b[node] = v;
    return;
  }
  // type 2

  ll mid = (l + r)/2;
  ll n1 = 2*node;
  ll n2 = n1 + 1;

  up(l , mid , n1 , x , v);
  up(mid + 1, r, n2, x , v);

  b[node] = min(b[n1] , b[n2]);

  return;
}

void solve(){

   ll n;
   cin >> n;
   for(ll i=1;i<=n;i++) cin >> a[i];

   build(1 , n , 1);

   up(1,n,1, 2 , 5);
   up(1,n,1, 3, 100);
   up(1, n , 1, 4, 0);

   cout << get(1, n , 1, 2 , 4);

   return;
}

