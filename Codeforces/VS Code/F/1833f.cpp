
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
#define lo(i,a,n)               for(i=a;i<n;i=i++)
#define loi(i,a,n)              for(i=a;i>n;i=i--)
#define ms(a,b)                 memset(a, b, sizeof(a))
#define pb(a)                   push_back(a)
#define vrev(v)                 reverse(v.begin(),v.end());
#define vsort(v)                sort(v.begin(),v.end());
#define mp                      make_pair
#define vi                      vector <int>
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


    ll power(ll n, ll m){
        ll i=1;
        while(m--)i*=n;
        return i;
    }

  

 
    
 
void solve()
{
    ll i,j,q,k,c=0,d,x,y,m,n,z;
    
    cin>>n>>m;
   ll arr[n];
   for(i=0;i<n;i++)cin>>arr[i];

   if(m==1){
    out(n);
    return;
   }
   sort(arr, arr+n);
    vp vec;
   ll cnt=1;
   for(i=0;i<n-1;i++){
    if(arr[i]==arr[i+1])cnt++;
    else{
        vec.vpb(arr[i],cnt);
        cnt=1;
    }
   }
   vec.vpb(arr[i],cnt);
   vsort(vec);
   

    
    ll ans=0;
    cnt=vec[0].second;
    n=vec.size();
    for(i=0,j=0;j<n;){
        if(vec[j].first-vec[i].first < m-1){
            j++;
            if(j<n)cnt=((cnt%mod)*(vec[j].second%mod))%mod;
        }
        else if(vec[j].first-vec[i].first == m-1){
            ans=(ans+cnt)%mod;
            cnt/=vec[i].second;
            i++;
            j++;
            if(j<n)cnt=((cnt%mod)*(vec[j].second%mod))%mod;
        }
        else{
            i=j;
            if(j<n)cnt=vec[j].second;
        }
    }
     //if(vec[j].first-vec[i].first == m-1)ans=(ans+cnt)%mod;

   out(ans%mod);

    
}
 
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       int t;
       cin>>t;

       while(t--)solve();
}


