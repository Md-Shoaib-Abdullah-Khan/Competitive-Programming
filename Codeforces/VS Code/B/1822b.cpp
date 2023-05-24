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

    
    ll mex(ll arr[], ll n){
        ll i,a=0;
        ll arr1[n];
        for(i=0;i<n;i++)arr1[i]=arr[i];
        sort(arr1, arr1+n);
        for(i=0;i<n;i++)if(arr1[i]==a)a++;

        return a;
    }
    ll power(ll n, ll m){
        ll i=1;
        while(m--)i*=n;
        return i;
    }
    
 
void solve()
{
    ll i,j,q,c,a,b,m,n;
    
    cin>>n;
    vector<ll>pos;
    vector<ll>neg;

    for(i=0;i<n;i++){
        cin>>a;
        if(a>=0)pos.pb(a);
        else neg.pb(-a);
    }
    
   sort(pos.begin(), pos.end());
   sort(neg.begin(), neg.end());

    ll n1=pos.size(), n2=neg.size();

   if(n2>=2 && n1>=2)cout<<max(pos[n1-1]*pos[n1-2], neg[n2-1]*neg[n2-2])<<endl;
   else if(n1>=2)cout<<pos[n1-1]*pos[n1-2]<<endl;
   else if(n2>=2) cout<<neg[n2-1]*neg[n2-2]<<endl;
   else cout<<-neg[n2-1]*pos[n1-1]<<endl;

   

    
}
 
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
       int t;
       cin>>t;

       while(t--)solve();
}


