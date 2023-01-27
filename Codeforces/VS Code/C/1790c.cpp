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
#
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
bool compare(int x, int y){
    return x > y;
}


const int INF=1e9+5;




void solve(){

    ll n=0,k,i,j,m,x,a=1,b,y;
    
    
    cin>>n;
    vector<ll>vec[n];

    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            cin>>a;
            vec[i].pb(a);
        }
    }
     vector<ll>ans;
    if(n==3){
        if(vec[0][0]==vec[1][0]){
                ans.pb(vec[0][0]);
                ans.pb(vec[2][0]);
        }
        else if(vec[1][0]==vec[2][0]){
                ans.pb(vec[1][0]);
                ans.pb(vec[0][0]);
        }
        else if(vec[0][0]==vec[2][0]){
                ans.pb(vec[0][0]);
                ans.pb(vec[1][0]);
        }
        if(vec[0][1]==vec[1][1]){
                ans.pb(vec[0][1]);
               
        }
        else if(vec[1][1]==vec[2][1]){
                ans.pb(vec[1][1]);
                
        }
        else if(vec[0][1]==vec[2][1]){
                ans.pb(vec[0][1]);
                
        }
        for(i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
        return;
    }
    ll cnt[n+1];
    memset(cnt,0,sizeof(cnt));
   
    for(i=0;i<n-1;i++){
        ll temp=0;
        for(j=0;j<n;j++){
            cnt[vec[j][i]]++;
        }

        for(j=1;j<=n;j++){
            if(cnt[j]>temp){
                temp=cnt[j];
                a=j;
            }
        }
    ans.pb(a);
    cnt[a]=0;
    }

    ll temp=0;
    for(j=1;j<=n;j++){
            if(cnt[j]>temp){
                temp=cnt[j];
                a=j;
            }
    }
        ans.pb(a);

    for(i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
   
    }

int main()
{
    //   ios_base::sync_with_stdio(false);
    //   cin.tie(NULL); 
   ll t;
   cin>>t;
   while(t--)solve();
}

