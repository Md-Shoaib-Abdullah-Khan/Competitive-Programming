
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <cassert>
#include <string>
#include <cstring>
#include <chrono>
using namespace std;
 
 
#pragma GCC                     optimize ("Ofast")
#pragma GCC                     optimize("O3")
#define db                      double
#define ll                      long long
#define lo(i,a,n)               for(i=a;i<n;i++)
#define loi(i,a,n)              for(i=a;i>n;i--)
#define ms(a,b)                 memset(a, b, sizeof(a))
#define pb(a)                   push_back(a)
#define vrev(v)                 reverse(v.begin(),v.end());
#define vsort(v)                sort(v.begin(),v.end());
#define mp                      make_pair
#define vi                      vector <int>
#define vl                      vector <long long>
#define vp                      vector <pair <long long,long long>>
#define vpb(a,b)                push_back({a,b})
#define pii                     pair <int,int>
#define Pll                     pair <long long,long long>
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
#define mod                     1000000007
#define out(a)                  cout<<a<<endl
#define INF                     1e9+7
#define infinity                (1<<28)
#define EPS                     10E-9
#define M                       1000000007
#define print(arr)              for(auto a: arr) cout << a<< " "; cout << endl;
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
bool compare(pair<int,pair<int,int>>&x, pair<int,pair<int,int>>& y){
    return x.first<y.first;
}
vp vec[200005];
bool vis[200005];
vl ans;


    ll power(ll n, ll m){
        ll i=1;
        while(m--)i*=n;
        return i;
    }

    ll dfs(ll n){
        ll cnt=0;
        vis[n]=true;
        //cout<<n<<endl;
        for(auto l:vec[n]){
            if(vis[l.first])continue;
            ll a=dfs(l.first);
            if(a==3)ans.pb(l.second);
            else cnt+=a;
            
        }
        
        return cnt+1;
    }
    ll binary_search(ll arr[], ll l, ll r, ll value){
        if(l>r )return l;
        else{
            ll mid = l+(r-l)/2;
    
             if(arr[mid] == value)return mid;
            else if(value > arr[mid])return binary_search(arr, mid+1, r, value);
            else return binary_search(arr, l, mid-1, value);
        }
    }
  

 
    
 
void solve()
{
    ll i,a,b,j,q,k,c=0,d,x,y,m,n,z;
    string s;
    
    cin>>n;
    ll arr[n];
   
    lo(i,0,n)cin>>arr[i];

    ll sleep[n];
    sleep[0]=0;
    sleep[1]=0;
    for(i=2;i<n;i++) 
        if(i%2==0)sleep[i]=sleep[i-2]+arr[i]-arr[i-1];
        else sleep[i]=sleep[i-1];
       
    cin>>m;
    ll ans=0;
    while(m--){
        cin>>a>>b;
        ll pos1,pos2;
        pos1=binary_search(arr, 0, n-1, a);
        pos2=binary_search(arr, 0, n-1, b);
        c=0;d=0;

        if(arr[pos1]!=a)c=arr[pos1]-a;
        if(arr[pos2]!=b){d=b-arr[pos2-1];
            pos2--;
        }
        ans=sleep[pos2]-sleep[pos1];
        if(pos1%2==0)ans+=c;
        if(pos2%2==1)ans+=d;
        out(ans);
    }

   
    
    
}
 
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       int t;
       cin>>t;

       while(t--)solve();
}
