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
#define lcm(a, b)               (a)*((b)/__gcd(a,b))
#define end0                    "\n"
#define end1                    cout<<"\n";
#define Pi                      acos(-1)
#define mod                     998244353

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
ll N;
char board[250][250];
ll dp[250][250], vis[250][250], cnt=1;

ll forBlack(ll n, ll m){
    if(n==N || m == N || n<0 || m<0)return 0;
    else if(board[n][m] == 'w')return 0;
    else if(n==N-1)return 1;
    else if(dp[n][m] != -1)return dp[n][m];
    else if(vis[n][m])return 0;
    vis[n][m] = 1;
    //cout<<n<<" "<<m<<endl;
    ll a,b,c,d,e,f;
    a = forBlack(n+1, m);
    b = forBlack(n, m+1);
    c = forBlack(n-1, m);
    d = forBlack(n, m-1);
    e = forBlack(n+1, m+1);
    f = forBlack(n-1, m-1);
    
    return dp[n][m] = a|b|c|d|e|f;
}
ll forWhite(ll n, ll m){
    if(n==N || m == N || n<0 || m<0)return 0;
    else if(board[n][m] == 'b')return 0;
    else if(m==N-1)return 1;
    else if(dp[n][m] != -1)return dp[n][m];
    else if(vis[n][m])return 0;
    vis[n][m] = 1;

    ll a,b,c,d,e,f;
    a = forWhite(n+1, m);
    b = forWhite(n, m+1);
    c = forWhite(n-1, m);
    d = forWhite(n, m-1);
    e = forWhite(n+1, m+1);
    f = forWhite(n-1, m-1);
    
    return dp[n][m] = a|b|c|d|e|f;
}


void solve(){

    ll n,k,i,x,a,b,y;
   
memset(dp,-1, sizeof(dp));
memset(vis, 0, sizeof(vis));
    

    char arr[N+1];

    for(i=0;i<N;i++){
        cin>>board[i];
    }
    ll ans =-1;
    for(i=0;i<N;i++){
        if(forBlack(0,i)) {
            ans = 0;
            break;
        }
        else if(forWhite(i,0)){
            ans = 1;
            break;
        }
    }
    if(ans==1)cout<<cnt<<" W"<<endl;
    else if(ans==0)cout<<cnt<<" B"<<endl;
    cnt++;
    
    
}

int main()
{
    //   ios_base::sync_with_stdio(false);
    //   cin.tie(NULL); 
  
   
  while(1) 
  {
    cin>>N;
    if(N==0)break;
  solve();
  }
}

