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
#define mod                     107
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
    int ans[mod];
    int x[mod];
    int n;


    void dfs(int starting,int ending,int cnt)
    {

        int i=0,j=0,ans1=0,ans2=0;

    if(ending<starting)return;



        //cout<<x[starting]<<" "<<x[ending]<<" "<<*it<<endl;

        for( i=starting;i<=ending;i++)
        {
           if(ans1<x[i])
           {
               ans1=x[i];
               ans2=i;
           }

        }
        ans[ans2]=cnt;
        //cout<<*it<<endl;

        dfs(starting,ans2-1,cnt+1);
        dfs(ans2+1,ending,cnt+1);
        return;

    }

void solve()
{ int a,i,j,k,l,w,h,m,ma,r,c,z,s,e,t,tt,x5,y5;
int ans2=1;

cin>>n;



   for(i=0;i<n;i++)
   {
       cin>>x[i];

   }
    int cnt=0;
   dfs(0,n-1,cnt);
   c=0;

   for(i=0;i<n;i++)
   {if(c)cout<<" ";

       cout<<ans[i];
       c=1;
   }
   cout<<endl;
   return;



}



int main(){
    long long i,j,k,l,m,ma,r,c[567890],z,s,e,t,tt,x5,y5;
    cin >>t;
    while (t--){
    solve();
    }
}

