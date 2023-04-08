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

 
  void binary_search(ll ans[], ll limit[], ll sum[], ll l, ll r, ll m, ll n, ll value){

    if(l > r){
        if(l>=n) limit[n-1]++;
        else if(r<m){
           if(m==0) ans[m] += value;
           else ans[m]+=(value-sum[m-1]);
        
        }
        else{
            limit[l-1]++;
            ans[l] += (value-sum[l-1]);
        }
        return;
    }
    else{
        ll mid = l + (r-l)/2;

        if(sum[mid]==value){
            limit[mid]++;
            return;
        }
        if(sum[mid] > value) binary_search(ans, limit, sum, l, mid-1, m, n, value);
        else binary_search(ans, limit, sum, mid+1, r, m, n, value);
    }

  }
  int max_steps;
  int vis[1000005];
  int rec(int l, int r, bool used, int steps){
    
    if(l>r)return -1;
    else if(l<=r && steps==max_steps)return 1;
    else if(vis[l])return vis[l];
    int cnt=0;
   
    int a=0,b=0;
    a=rec(2*l,r,used,steps+1);
    if(!used)b=rec(3*l,r,true,steps+1);

    if(a>0)cnt+=a;
    if(b>0)cnt+=b;

    return vis[l]=cnt;
  }


  int power(int n, int m){
    if(m==0)return 1;
    if(m==1)return n;

    return n*power(n, m-1);
  }
  
 
void solve()
{
    int i,j,a,b,c,d,m,n;
  
    cin>>n;

   int arr[n];
    for(i=0;i<n;i++)cin>>arr[i];

    sort(arr, arr+n);
    int cnt=1, num=0;
   a=0;
   b=0;
    for(i=0;i<n;i++){
        if(arr[i]==0)a++;
        else if(arr[i]==1)b++;
    }
    if(n-a>=a-1)cout<<0<<endl;
    else if((n-a-b)>0||b==0)cout<<1<<endl;
    else cout<<2<<endl;
    
        
    

    
    
    
    
    
}
 
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
   int t;
   cin>>t;
    while(t--)solve();
}


