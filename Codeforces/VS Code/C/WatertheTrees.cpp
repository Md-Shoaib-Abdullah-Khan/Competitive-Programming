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
#define mod                     32768

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






void solve(){

    ll n,k,i,x,a,b,y;

    cin>> n;

    ll arr[n], mx=0;

    for(i=0;i<n;i++){
        cin>>arr[i];
        mx = max(arr[i], mx);
    }
    ll odd=0, even=0;

    if(mx%2){
        for(i=0;i<n;i++){
            if(arr[i] == mx)continue;
            if(arr[i]%2 ==0){
                odd++;
                even += (mx-arr[i]) / 2;
            }
            else {
                even += (mx-arr[i]) / 2;
            }
        }
    }
    else{
         for(i=0;i<n;i++){
            if(arr[i] == mx)continue;
            if(arr[i]%2 ==0){
                even += (mx-arr[i]) / 2;
            }
            else {
                odd++;
                even += (mx-arr[i]) / 2;
            }
        }
    }
    
    if(odd==even)cout<<odd*2<<endl;
    else if(odd>even)cout<<odd*2-1<<endl;
    else{
        while(even > odd){
            // if(even == odd+1 || odd == even)break;
            //cout<<odd<<" "<<even<<endl;
            if(odd+2 <= even -1){
            odd+=2;
            even--;
            }
            else break;
        }
        
        
        cout<<even*2<<endl;
    }

    
    
}

int main()
{
    //   ios_base::sync_with_stdio(false);
    //   cin.tie(NULL); 
   int t;
  cin>>t;
   
    while(t--) solve();
}

