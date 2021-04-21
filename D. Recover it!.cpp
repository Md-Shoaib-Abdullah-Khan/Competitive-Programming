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
#define lcm(a, b)               (a)*((b)/gcd(a,b))
#define end0                    "\n"
#define end1                    cout<<"\n";
#define Pi                      acos(-1)
#define mod                     1000007
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

    vector <ll> x;
    ll primeCnt=0;
    ll y[200000];


void SieveOfEratosthenes(ll n)
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    memset(y, 0, sizeof(y));

    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {

            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (ll p = 2; p <= n; p++)
        if (prime[p])
        {
            primeCnt++;
            y[p] = primeCnt;
            cout << p <<" "<<y[p]<<endl;

        }
}

    // Print all prime numbers



ll binarySearch1( ll l, ll r, ll n)
{
    if (r >= l) {
        ll mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (x[mid] == n)
        {
            return mid;

        }
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (x[mid] > n)
            return binarySearch1( l, mid - 1, n);

        // Else the element can only be present
        // in right subarray
        return binarySearch1( mid + 1, r, n);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

void solve()
{long long int  i,j,l,w,h,n,m,ma,r,z,s,e,t,tt,x5,y5;
    ll a, b ,result;
    vector <ll> ans;
    cin>>n;

    n*=2;

    for(i=0;i<n;i++)
    {
        cin>>a;
        x.pb(a);

    }

    sort(x.begin(),x.end());


    SieveOfEratosthenes(x[n-1]);

    for(i=n-1;i>=0;i-=2)
    {


        //cout<<x[i]<<" "<<result+1<<" "<<i<<endl;

        if(y[x[i]])
        {
            ans.pb(y[x[i]]);
             ll result = binarySearch1( 0, n - 1, y[x[i]]);
           // cout<<result<<endl;
            x[result] = x[i];
           sort(x.begin(),x.end());
        }
        else
        {a=0;
        ans.pb(x[i]);
            for(j=sqrt(x[i]);j>1;j--)
            {
                if(x[i]%j==0)
                {
                    a= max(j,a);
                    a= max(x[i]/j,a);
                }
            }
            ll result = binarySearch1( 0, n - 1, a);
            x[result] = x[i];
           sort(x.begin(),x.end());
        }
    }

    for(auto it = ans.begin(); it != ans.end();it++)
    {
        if(it!=ans.begin())cout<<" ";
        cout<<*it;
    }
    cout<<endl;



    return;




}



int main(){
    long long i,j,k,l,n,m,ma,y,r,c[567890],z,s,e,t,tt,x5,y5;

    solve();

}

