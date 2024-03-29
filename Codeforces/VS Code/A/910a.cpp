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
vector<int>nodes[100005];
int level[1000];
int N;
vector<int>sequence;
int DFS(int n, int cnt){
    if(n==N)return cnt;
    int ans=mod;
    for(int i:nodes[n]){
        ans = min(ans,DFS(i,cnt+1));
    }
    return ans;
}
void BFS(int n){
    queue<int> qu;
    qu.push(n);
    while(!qu.empty()){
        int x = qu.front();
        qu.pop();
        for(int i:nodes[x]) {
            qu.push(i);
            level[i]=level[x]+1;
        }
    }
    return;
}



void solve(){

    int n,k,i,j,m,x,a=0,b,y;

    cin>>n>>m;
    N=n-1;
    string s;
    cin>>s;
    for(i=0;i<n;i++){
        j=min(i+m,n-1);
        while(j>i && s[i]=='1' && j<n){

            if(s[j]=='1'){
                nodes[i].push_back(j);
                //cout<<i<<" "<<j<<endl;
                break;
            }
            j--;
        }
    }
    memset(level, 0, sizeof(level));
  //ll ans = DFS(0,0);
  BFS(0);
  if(level[n-1]==0)cout<<"-1"<<endl;
  else  cout<< level[n-1]<<endl;
   
    }

int main()
{
    //   ios_base::sync_with_stdio(false);
    //   cin.tie(NULL); 
   solve();
}

