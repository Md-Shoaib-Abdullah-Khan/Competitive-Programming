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
#define mod                     1000

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



void solve(){

        ll n,i,j,m,k,rating;
        ll a, b,c;
    
    cin>>n;
    
   vector<pair<ll,ll>>vec;

   for(i=0;i<n;i++){
    cin>>a>>b;
    vec.push_back({a,b});
   }
   ll ans=1;
   int cnt=0;
   int vis[n]={0};

   for(i=0;i<n-1;i++){
    if(vec[i].second == vec[i+1].second){
        cnt++;
        vis[i]=1;
        vis[i+1]=1;
       // cout<<vec[i].second<<" ";
    }
    else if(cnt>0){
        ans = (ans*(cnt+1))%mod;
        cnt=0;
    }
   }
   if(cnt>0){
        ans = (ans*(cnt+1))%mod;
        cnt=0;
    }
    
 //for(i=0;i<n;i++)cout<<vis[i]<<" ";
 bool inc=true;
   for(i=1;i<n;i++){
    if(vec[i].first == vec[i-1].second || vec[i].second == vec[i-1].first)
        if(vis[i-1]||vis[i]){
            vis[i]=1;
            vis[i-1]=1;
            if(inc){
                ans++;
                inc=false;
            }
        }
        else {
            vis[i]=1;
            inc=true;
        }
        else inc=true;
   }
  

   for(i=0;i<n;i++){
    
        if(vis[i]==0)ans = (ans*2)%mod;
    
   }

    
    
   
   cout<<ans+1<<endl;
   

}

int main()
{
    

   
    solve();
}

