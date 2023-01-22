#include<bits/stdc++.h>
using namespace std;


#pragma GCC                     optimize ("Ofast")
#pragma GCC                     optimize("O3")
#define db                      double
#define ll                      long long
#define ull                     unsigned long long
#define lo(i,a,n,x)             for(i=a;i<n;i=i+x)
#define loi(i,a,n,x)            for(i=a;i>n;i=i-x)
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
#define mod                     1000000007
#define inf                     1000000001
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
bool compare(ll x, ll y){
    return x>y;
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

void solve(){

    int n,k,i,j,m,x,a=0,b,y;

    cin>>n>>m;
    int arr[n];
    vector<int> vec[100005];
    for(i=0;i<n;i++)cin>>arr[i];
    sort(arr, arr+n);
    if(arr[n-1]<m){
        cout<<"-1"<<endl;
        return;
    }
    for(i=0;i<n;i++){
        for(j=1; j<=sqrt(arr[i]);j++){
            if(arr[i]%j==0 && (arr[i]/j)<=m)vec[arr[i]].push_back(arr[i]/j);
            if(arr[i]%j==0 && j<=m && arr[i]/j != j)vec[arr[i]].push_back(j);
        }
    }
    // for(i=0;i<n;i++){
    //     for(auto l:vec[arr[i]])cout<<l<<" ";
    //     cout<<endl;
    // }
    int cnt[m+5], ans=mod;
    bool ans_exists=false;
    memset(cnt, 0, sizeof(cnt));
    for(auto k: vec[arr[0]]){
            cnt[k]++;
           // cout<<k<<" ";
        }
    for(i=0,j=0;j<n && i<=j;){
        int temp=0;
        
        for(k=1;k<=m;k++){
            if(cnt[k]>0)temp++;
        }
        //cout<<temp<<endl;
        if(temp!=m){
            j++;
            if(j==n)break;
            for(auto k: vec[arr[j]]){
            cnt[k]++;
         }
        }
        else{
            ans_exists=true;
            ans=min(arr[j]-arr[i], ans);
            for(auto k:vec[arr[i]]) cnt[k]--;
            i++;
        }
    }
    if(ans_exists)cout<<ans<<endl;
    else cout<<"-1"<<endl;
   
   
}

int main()
{
    //   ios_base::sync_with_stdio(false);
    //   cin.tie(NULL); 
   ll t;
   cin>>t;
   
   while(t--)  solve();
}

