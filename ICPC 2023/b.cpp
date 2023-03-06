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
 
 int test =1;
 
void solve(){
 
   int n,m, k,q,i,j,x=0,a,b,d,c,y=0,z;

    cin>>n;
    int arr1[n], arr2[n];

    for(i=0;i<n;i++)cin>>arr1[i];
    for(i=0;i<n;i++)cin>>arr2[i];

    bool alice=true, bob= false;

    set<int>div;
    for(i=0;i<n;i++){
        for(j=1;j*j<=arr1[i]; j++)if(arr1[i]%j==0){
            div.insert(j);
            div.insert(arr1[i]/j);
        }
    }
    //for(auto l:div)cout<<l<<" ";
    for(i=0;i<n;i++){
        auto it = div.find(arr2[i]);
        if(it==div.end()){
            alice=false;
        }
    }
    a=-1;
    b=-1;
    int cnt=0;
    if(arr2[0]%arr1[0]==0)a=arr2[0]/arr1[0];
    if(arr1[0]%arr2[0]==0)b=arr1[0]/arr2[0];
    for(i=0;i<n && a!=-1;i++){
        if(arr2[i]%arr1[i]==0)cnt++;
    }
    for(i=0;i<n && b!=-1;i++){
        if(arr1[i]%arr2[i]!=0)cnt++;
    }
    if(cnt==n)bob=true;
    cout<<"Case "<<test<<": ";
    if(alice==true)cout<<"Yes ";
    else cout<<"No ";
    if(bob==true)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}
 
int main()
{
    //   ios_base::sync_with_stdio(false);
    //   cin.tie(NULL);
   int t;
  cin>>t;
 
    while(t--) {
        solve();
        test++;
    }
}
 