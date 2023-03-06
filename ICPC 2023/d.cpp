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
 
    int arr[3];
   cin>>arr[0]>>arr[1]>>arr[2]>>k;
    sort(arr, arr+3);
    // if(arr[2]==0){
    //     cout<<"Case "<<test<<": "<<""<<endl;
    //     return;
    // }
    if(arr[0]==arr[1] && arr[1]==arr[2]){
        cout<<"Case "<<test<<": "<<"Peaceful"<<endl;
        return;
    }
        if((arr[0]+arr[1]+arr[2])%3!=0  || arr[1]<k){
            cout<<"Case "<<test<<": "<<"Fight"<<endl;
            return;
        }
        x=(arr[0]+arr[1]+arr[2])/3;
         if((abs(arr[0]-x)%k==0) && (abs(arr[1]-x)%k==0) && (abs(arr[2]-x)%k==0))cout<<"Case "<<test<<": "<<"Peaceful"<<endl;
         else cout<<"Case "<<test<<": "<<"Fight"<<endl;



        // while(1){
        //     if(arr[0]==arr[1] && arr[1]==arr[2]){
        //        cout<<"Case "<<test<<": "<<"Peaceful"<<endl;
        //           return;
        //       }

        //       arr[2]-=k;
        //       arr[0]+=k;
        //       if(arr[0]>arr[1])swap(arr[0],arr[1]);
              
        //       if(arr[2]<arr[1]){
        //     cout<<"Case "<<test<<": "<<"Fight"<<endl;
        //     return;
        //      }

        // }

    
    
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
 