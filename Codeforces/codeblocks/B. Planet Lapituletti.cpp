#include<bits/stdc++.h>
#include<stdio.h>
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
#define mod                     1000000007
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

bool compare(const tuple<int, int, int>& a,
               const tuple<int, int, int>& b)
{
    return (get<2>(a) < get<2>(b));
}

void solve()
{int i,a,b,c,d,a1,b1,c1,d1,j,k,l,w,h,n,m,ma,r,z,e,t,tt,x5,y5;



    char x[10],x1[10],x2[10];
    int y[]={1,2,5,8,0};

    cin>>h>>m;
    cin>>x;
    a=x[0]-'0';
    b=x[1]-'0';
    c=x[3]-'0';
    d=x[4]-'0';

    a1=x[0]-'0';
    b1=x[1]-'0';
    c1=x[3]-'0';
    d1=x[4]-'0';

    while(1)
    {if(a*10+b>=h||(a*10+b>=h&&c*10+d>=m)){a=0,b=0,c=0,d=0;}
        if((c==y[0]||c==y[1]||c==y[2]||c==y[3]||c==y[4])&&(d==y[0]||d==y[1]||d==y[2]||d==y[3]||d==y[4])&&(b==y[0]||b==y[1]||b==y[2]||b==y[3]||b==y[4])&&(a==y[0]||a==y[1]||a==y[2]||a==y[3]||a==y[4]))
        {
            c1=c;
            if(c1==2)c1=5;
            if(c1==5)c1=2;
            d1=d;
            if(d1==2)d1=5;
            if(d1==5)d1=2;
            a1=a;
            if(a1==2)a1=5;
            if(a1==5)a1=2;
            b1=b;
            if(b1==2)b1=5;
            if(b1==5)b1=2;
            if(d1*10+c1<h&&b1*10+a1<m)break;

        }
        d++;
        if(d==10)
        {
            d=0;
            c++;
        }
        if(c*10+d>=m)
        {
            c=0;
            d=0;
            b++;
        }
        if(b==10)
        {
            b=0;
            a++;
        }

    }

    cout<<a<<b<<":"<<c<<d<<endl;

}
long long i,j,k,l,n,m,ma,y,r,c[567890],z,s,e,t,tt,x5,y5;


int main(){
    cin>>t;
    while(t--){solve();}
}


