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
bool compare(pair<ll , set<ll>>& x, pair<ll , set<ll>> & y){
    return x.first > y.first;
}

map<int,int> level;
int N;
map<int,int> parent;
// int DFS(int n, int cnt){
//     if(n==N)return cnt;
//     int ans=mod;
//     for(int i:nodes[n]){
//         ans = min(ans,DFS(i,cnt+1));
//     }
//     return ans;
// }
void BFS(ll n){
    queue<ll> qu;
    qu.push(n);
    while(!qu.empty()){
        ll x = qu.front();
        //cout<<x<<" ";
        qu.pop();
        ll a=x*2;
        ll b=x*10+1;
        if(a<=N){
            qu.push(x*2);
            parent[a]=x;
            if(a==N)return;
        }
        if(b<=N){
            qu.push(b);
            parent[b]=x;
            if(b==N)return;
        }
    }
    return;
}



void solve(){

    ll n,k,i,j,m,x,a=0,b,y;

    cin>>n>>N;
    
   
    parent[N]=0;
    BFS(n);
    vector<int>sequence;
    parent[1]=0;
    if(parent[N]==0){
        cout<<"NO"<<endl;
        return;
    }
    else cout<<"YES"<<endl;
    i=N;
    while(i!=n){
        sequence.pb(i);
        i=parent[i];
    }
    sequence.pb(n);
    cout<<sequence.size()<<endl;
    for(i=sequence.size()-1; i>=0;i--){
        cout<<sequence[i]<<" ";
    }
   
    }

int main()
{
    //   ios_base::sync_with_stdio(false);
    //   cin.tie(NULL); 
   solve();
}

