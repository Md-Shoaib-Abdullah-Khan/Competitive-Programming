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
#define lo(i,a,n)               for(i=a;i<n;i++)
#define loi(i,a,n)              for(i=a;i>n;i--)
#define ms(a,b)                 memset(a, b, sizeof(a))
#define pb(a)                   push_back(a)
#define vrev(v)                 reverse(v.begin(),v.end());
#define vsort(v)                sort(v.begin(),v.end());
#define mp                      make_pair
#define vi                      vector <int>
#define vl                      vector <long long>
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
#define INF                     1e8+7
#define infinity                (1<<28)
#define EPS                     10E-9
#define M                       1000000007
#define print(arr)              for(auto a: arr) cout << a<< " "; cout << endl;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
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

 ll query(int tree[], int qlow, int qhigh, int low, int high, int pos){

    if(qlow<=low && qhigh>=high)return tree[pos];

    else if(qlow>high || qhigh<low)return 0;

    int mid=(low+high)/2;

    return query(tree, qlow, qhigh, low, mid, 2*pos+1)+ query(tree, qlow, qhigh, mid+1, high, 2*pos+2);
 }
 void update(int tree[], int low, int high, int pos, int indx, int value){
    if(low==high){
        if(low==indx)tree[pos]=value;
        return;
    }
    int mid = (low + high)/2;
    update(tree, low, mid, 2*pos+1, indx, value);
    update(tree, mid+1, high, 2*pos+2, indx, value);

    tree[pos]=tree[2*pos+1]+tree[2*pos+2];
 }
 bool isPossible(int q[], vector<pair<int,int>>& range, int mid , int n){
    int cnt[n]={0};
    for(int i=0;i<=mid;i++)cnt[q[i]-1]++;
    for(int i=1;i<n;i++)cnt[i]+=cnt[i-1];
    for(auto e:range){
        int l=e.first-1;int r=e.second-1;
        int sum=cnt[r];
        if(l>0)sum-=cnt[l-1];
        int a=e.second-e.first+1-sum;
        if(sum>a){
            return true;
        }
    }
    return false;
 }

 int binary_search(int q[], vector<pair<int,int>>& range, int n, int low, int high){
    if(low>high)return INF;
    else{
        int mid=low+(high-low)/2, ans=INF;
    
        if(isPossible(q, range, mid, n))ans=mid;
        
        if(ans==INF)ans=min(ans,binary_search(q, range, n, mid+1, high));
        else ans=min(ans,binary_search(q, range, n, low, mid-1));
        return ans;
    }
 }


void solve(){

 int n,m,i,j,k,a,b;
    cin>>n>>m;

    
    vector<pair<int, int>>range(m);
    for(i=0;i<m;i++){
        cin>>range[i].first>>range[i].second;
    }
    
    
    cin>>k;
    int q[k];
    for(i=0;i<k;i++)cin>>q[i];
    int ans=binary_search(q, range, n, 0, k-1);
    if(ans==INF)out(-1);
    else out(ans+1);


    
}

int main()
{
    Faster;
   int t;
  cin>>t;
   
    while(t--) solve();
}

