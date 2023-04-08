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


// int sqrtDec(int arr[],set<int> &st, int n, int l, int r){
//     int len=sqrt(n)+1;
//     set<int> sum;
//     int siz=0;
//     l--;
//     r--;
//     for(int i=l;i<=r;){
//         if(i%len==0 && i+len-1<=r){
//             siz+=st[i].size();
//             i+=len;
//         }
//         else{
//             sum.insert(arr[i]);
//             i++;
//         }
//     }
//     siz+=sum.size();
//     return siz;
// }


  
 
void solve()
{
    int i,j,a,q,c,d,m,n;
  
    cin>>n>>q;
    int arr[n];
    set<int>st[n];


    for(i=0;i<n;i++)cin>>arr[i];
    int len=sqrt(n)+1;
    
    for(i=0;i<n;i++){
        st[i/len].insert(arr[i]);
    }
    
    while(q--){
        int l,r;
        cin>>l>>r;
        set<int> sum;
    int siz=0;
    l--;
    r--;
    for( i=l;i<=r;){
        if(i%len==0 && i+len-1<=r){
            siz+=st[i].size();
            i+=len;
        }
        else{
            sum.insert(arr[i]);
            i++;
        }
    }
    siz+=sum.size();
        cout<<siz<<endl;
    }
    
    
}
 
int main()
{
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
   solve();
}


