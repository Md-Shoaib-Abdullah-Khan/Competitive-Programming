#include<bits/stdc++.h>
using namespace std;
 
 #define lower(x,y)        lower_bound(x.begin(), x.end(), y) - x.begin()
#define upper(x,y)        upper_bound(x.begin(), x.end(), y) - x.begin()
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
 
#define INF                     1e9+5
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
 
int sumOfDigits(int n){
    int i,j,sum=0;
    i=10;
    while(n){
        sum+=n%i;
        n/=i;
    }
    return sum;
}
vector<ll>sum1;
vector<ll>sum2;
 
  ll binary_search(ll l, ll r, ll value){

    if(l > r) return r;
    else{
        ll mid = l + (r-l)/2;

        if(sum2[mid]==value){
            return mid;
        }
        if(sum2[mid] > value) return binary_search(l, mid-1, value);
        else return binary_search(mid+1, r, value);
    }

  }
 
  void subsum(ll arr[], ll i, ll n, ll sum, bool check){
    if(i>=n){
        if(!check)sum1.pb(sum);
        else sum2.pb(sum);
        return;
    }

    subsum(arr, i+1, n, arr[i]+sum, check);
    subsum(arr, i+1, n, sum, check);

    return;
  }
 
void solve()
{
    ll i,j,a,b,c,m,n;
  

    cin>>n>>a>>b;
    ll arr[n];
    for(i=0;i<n;i++)cin>>arr[i];

    ll n1,n2;
    
        n1=n/2;
        if(n%2==0)n1--;
        n2=n1+1;

        subsum(arr, 0, n1+1, 0, 0);
        subsum(arr, n2, n, 0, 1);
        sort(sum2.begin(), sum2.end());

        n2=sum2.size();

        ll ans=0;
        for(auto l:sum1){
            
            //cout<<l<<" "<<x<<" "<<y<<endl;
             
        ans += (upper(sum2, b - l)) - (lower(sum2, a - l));
        }
        cout<<ans<<endl;


   
   
    
}
 
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
   solve();
}


