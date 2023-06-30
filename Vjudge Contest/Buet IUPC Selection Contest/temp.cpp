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
#define mod                     1005
 
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

 
int  level[mod][mod], cnt=1, graph=1,n,m;
bool vis[mod][mod];
vector<ll> nodes[mod];
vector<ll>ans[mod];
string s[mod];

void BFS(pair<int,int> source){
    queue<pair<int, int>> q;
    q.push(source);
    vis[source.first][source.second] = 1;
    level[source.first][source.second]=0;
    

    while(!q.empty()){
        pair<int,int> curr_v = q.front();
        q.pop();
        int l=curr_v.first,r=curr_v.second;
        
        int a[]={0,0,1,-1};
        int b[]={1,-1,0,0};
        for( int i=0;i<4;i++){
            if(l+a[i]>=0 && r+b[i]>=0 && l+a[i]<n && r+b[i]<m && !vis[l+a[i]][r+b[i]] && s[l+a[i]][r+b[i]]!='#') {
                vis[l+a[i]][r+b[i]] = 1;
                q.push({l+a[i], r+b[i]});
                level[l+a[i]][r+b[i]] =min(level[l+a[i]][r+b[i]], level[l][r] +1);
            }
        }
    }
}  
 
void solve()
{
   int i,j,a,b;
  

    cin>>n;
    string s[n];
    int cnt[n]={0};
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)continue;
            string str1=s[i]+s[j],str2=s[i]+s[j];
            reverse(str2.begin(), str2.end());
            if(str1 == str2){
                cout<<"Yes"<<endl;
                return;
            }
        }
    }
    cout<<"No"<<endl;
    

    

    
    
 
    
    
}
 
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
  solve();
}