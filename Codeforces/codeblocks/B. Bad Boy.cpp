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

void solve()
{long long int  i,j,w,h,n,m,ma,e,t,tt,x5,y5;
        ll x,y,x1,y1,x2,y2,x3,y3,x4,y4,a,b,c,d;

        cin>>n>>m>>x>>y;

        x1=n,y1=m;

        x2=1,y2=m;

        x3=n;y3=1;

        x4=1,y4=1;

        a=abs(x-x1)+abs(y-y1);
        b=abs(x-x2)+abs(y-y2);
        c=abs(x-x3)+abs(y-y3);
        d=abs(x-x4)+abs(y-y4);

        if(a>=b&&a>=c&&a>=d)
        {
            cout<<"1 "<<"1 "<<x1<<" "<<y1<<endl;
        }
        else if(b>=a&&b>=c&&b>=d)
        {
            cout<<n<<" "<<"1 "<<x2<<" "<<y2<<endl;
        }
        else if(c>=a&&c>=b&&c>=d)
        {
            cout<<"1 "<<m<<" "<<x3<<" "<<y3<<endl;
        }
        else if(d>=a&&d>=c&&d>=b)
        {
            cout<<n<<" "<<m<<" "<<x4<<" "<<y4<<endl;
        }


}



int main(){
    long long i,j,k,l,n,m,ma,y,r,c[567890],z,s,e,t,tt,x5,y5;
    cin >>t;
    while (t--){
    solve();
    }
}

