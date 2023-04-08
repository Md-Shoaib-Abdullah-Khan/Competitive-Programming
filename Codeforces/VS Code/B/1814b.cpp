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
bool compare(pair<int,pair<int,int>>&x, pair<int,pair<int,int>>& y){
    return x.first<y.first;
}


int sqrtDec(int arr[],int b[], int n, int l,int r){
    int len=sqrt(n)+1;
    int sum=0;
    l--;
    r--;
    for(int i=l;i<=r;){
        if(i%len==0 && i+len-1<=r){
            sum+=b[i/len];
            i+=len;
        }
        else{
            sum+=arr[i];
            i++;
        }
    }
    return sum;
}

    int difference(int n){
        int mn=INF,mx=0;
        while(n){
            mn=min(n%10, mn);
            mx=max(n%10, mx);
            n/=10;
        }
        return mx-mn;
    }
    bool isPrime(ll n){
        if(n==1)return false;
        ll i=2;
        for(i=2;i<=sqrt(n);i++)
            if(n%i==0)return false;

        return true;
    }
    
 
void solve()
{
    ll i,j,q,c,m,n;
    
    cin>>n>>m;

    ll ans=0;
    if(isPrime(n)){
        n--;
        ans++;
    }
    if(isPrime(m)){
        m--;
        ans++;
    }
    if(n>m)swap(n,m);

    ll ans1=INF;
    for(i=1;i<=sqrt(n);i++){
        if(n%i==0){
            for(j=i;j<=sqrt(m);j++){
                if(m%j==0){
                    ans1=min(ans1,(n/i+m/j+j-1));
                    ans1=min(ans1,(n/i+m/(m/j)+m/j-1));
                    
                }
            }
            if(m%(n/i)==0)ans1=min(ans1,(n/(n/i)+m/(n/i)+n/i-1));
            
        }
    }

    cout<<ans+ans1<<endl;
    
    
    
    
}
 
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       int t;
       cin>>t;
       while(t--)solve();
}


