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
bool compare(pair<pair<int,char>,pair<int,int>>&x, pair<pair<int,char>,pair<int,int>>& y){
    return x.first.first<y.first.first;
}
int dist(pair<pair<int,char>,pair<int,int>>&x, pair<pair<int,char>,pair<int,int>>& y){
    return sqrt((x.second.first-y.second.first)*(x.second.first-y.second.first)+(x.second.second-y.second.second)*(x.second.second-y.second.second));
 }
 double angle(int a, int b, int c, int d){
    double ans=atan((double)(d-b)/(c-a));
    if(ans>=0)return (ans*180)/Pi;
    else return (ans*180)/Pi+180;
 }
 bool turn(pair<pair<int,char>,pair<int,int>>&x, pair<pair<int,char>,pair<int,int>>& y, pair<pair<int,char>,pair<int,int>>& z){
    int x1,y1,x2,y2;
    
    x1=y.second.first-x.second.first;
    y1=y.second.second-x.second.second;
    x2=z.second.first-y.second.first;
    y2=z.second.second-y.second.second;
    if((x1*y2-x2*y1)>0)return false;
    else return true;

 }
 stack<int> grahamScan(vector<pair<pair<int,char>,pair<int,int>>>&points){
    int i,j,a,b,c,d,m,n;

        stack<int>stack;
        stack.push(0);
        stack.push(1);
        n=points.size();
        for(i=2;i<n;i++){
            b=stack.top();
            stack.pop();
            a=stack.top();
            stack.pop();
           
            while(1){
                if(!turn(points[a],points[b],points[i]))break;
                b=a;
                a=stack.top();
                stack.pop();
               
            }
            stack.push(a);
            stack.push(b);
            stack.push(i);
            cout<<i<<endl;
        }
        return stack;

 }
    int dp[600][600];
    int rec(string s1, string s2, int i, int j,int cnt, bool enable){
       if(i<0||i>=s1.size()||j>=s2.size())return false;
        if(s1[i]!=s2[j])return false;
        if(cnt==s2.size())return true;
        //if(dp[i][j]!=-1)return dp[i][j];
        bool a;
        
        if(enable)a=rec(s1, s2, i+1,j+1,cnt+1, true);
        a|=rec(s1, s2, i-1,j+1,cnt+1, false);
        return a; 
   }

  
 
void solve(){
    ll i,j,k,a,b,c,d,m,n;
  
    cin>>n;

    n--;
    ll ans=sqrt(n);
    cout<<ans<<endl;
        
    
    
    
    
    
}
 
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
   int t;
   cin>>t;
    while(t--)solve();
}



