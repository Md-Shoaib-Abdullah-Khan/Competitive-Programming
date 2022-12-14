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
#define mod                     100000

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
ll NCR(ll n, ll r){
    
    ll p=1, k=1;

    if(n-r < r) r = n-r;

    if(r != 0)while(r){
        p *= n;
        k *= r;

        ll gcd = GCD(p,k);
        
        p /= gcd;
        k /= gcd;

        n--;
        r--;
    }
    else p=1;

    return p;


}



void solve(){

    ll n,i,j,rating;

    cin>>n;
    string str[n];
    string s;

    ll check[28][28], cnt1[27],cnt2[27];

    memset(cnt1, 0, sizeof(cnt1));
    memset(cnt2, 0, sizeof(cnt2));

    for(i=0;i<=26;i++){
        for(j=0;j<=26;j++)
        check[i][j]=0;
    }

    for(i=0;i<n;i++){
        cin>>s;
        if(!check[s[0]-'a'][s[1]-'a']) {
             cnt1[s[0]-'a']++;
             cnt2[s[1]-'a']++;
            
        }
        check[s[0]-'a'][s[1]-'a'] ++;
    }
    

    
    ll ans =0, sum=1;;
    for(i=0;i<=26;i++){
         if(cnt1[i] >= 2) ans += NCR(cnt1[i],2);
        if(cnt2[i] >= 2) ans += NCR(cnt2[i],2);

        sum =1;
        for(j=0;j<=26;j++){
            if(check[i][j]){
                sum *= check[i][j];
            }
        }
        cout<<sum<<endl;
        
        if(sum >1)ans += sum;
        // sum =1;
        // for(j=0;j<=26;j++){
        //     if(check[j][i])sum *= check[j][i];
        // }
        // cout<<sum<<endl;
        
        // if(sum>1) ans += sum;
    }
    cout<<ans<<endl;
        
    
}

int main()
{
    
   int t;
  cin>>t;
   
    while(t--) solve();
}

