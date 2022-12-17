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
vector<ll>Prime;
const int N = 100000;

bool vis[N];

void Sieve(){
   
    memset(vis, true, sizeof(vis));
    
    vis[0] = vis[1] = false;
    for(int i = 4 ; i < N ; i += 2)
        vis[i] = false;
    for(int i = 3 ; i < N / i ; i += 2){
        if(!vis[i])continue;
        for(int j = i * i ; j < N ; j += i + i)
            vis[j] = false;
    }
    Prime.pb(2);
    for(int i = 3 ; i < N ; i+=2)
        if(vis[i]) Prime.pb(i);
}

void SieveOfEratosthenes(int n)
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true) {
		
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= n; p++)
		if (prime[p])
			 Prime.pb(p);
            
}





void solve(){

    ll n,k,i,j,a,b,y;
    
    cin>> n;

    ll arr[n];
    for(i=0;i<n;i++){
    
    cin>>arr[i];
    
    }
    map<ll, int> cnt;
     
// for(k=0;k<n;k++){
//     a=arr[k];
//     for ( i = 0; Prime[i]*Prime[i]<=a; i++)
// 	{
//         if(cnt[Prime[i]] && a % Prime[i]==0){
//                 cout<<"YES"<<endl;
//                 return;
//             }
// 		while (a % Prime[i] == 0)
// 		{ 
//             cnt[Prime[i]]=1;
// 			a = a/Prime[i];
// 		}
// 	}
// 	if (a > 2){
// 	    if(cnt[a]){
//                 cout<<"YES"<<endl;
//                 return;
//             }
//     	cnt[a]=1;
    
//     }
// }
for( i=0;i<n;i++){
            ll x=arr[i];
            for(ll pp=0;Prime[pp]*Prime[pp]<=x;pp++){
                if(cnt[Prime[pp]] && x % Prime[pp]==0){
                cout<<"YES"<<endl;
                return;
            }
                if(x%Prime[pp]==0){
                    cnt[Prime[pp]]++;
                    while(x%Prime[pp]==0){
                        x/=Prime[pp];
                    }
                }
            }
            if(x!=1){
                if(cnt[x]){
                cout<<"YES"<<endl;
                return;
            }
                cnt[x]++;
            }
        }
    //for(i=0;i<cnt.size();i++)cout<<cnt[i]<<" ";
    
cout<<"NO"<<endl;

 
    
}

int main()
{
    //   ios_base::sync_with_stdio(false);
    //   cin.tie(NULL); 
   int t;
  cin>>t;
 // SieveOfEratosthenes(100000);
   Sieve();
    while(t--) solve();
}

