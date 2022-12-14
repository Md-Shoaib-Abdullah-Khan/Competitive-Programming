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
    char vecA[mod];
    char vecB[mod];
    string ans;

    ll dp[1010][1010],n,m;

    void LCS()
    {
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                if(vecA[i]==vecB[j])
                {
                    dp[i+1][j+1] = dp[i][j] + 1;
                }
                else if(vecA[i]!=vecB[j])
                {
                    dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
                }
                //cout<<vecA[i]<<" "<<vecB[j]<<" "<<dp[i+1][j+1]<<endl;
            }
        }
        return;
    }


void solve()
{long long int  i,j,w,h,a,ma,e,t,tt,x5,y5;



   memset(dp ,0, sizeof(dp));


    n=strlen(vecA);
    m=strlen(vecB);

    string ansStr;


    LCS();

    ans.clear();

    for( i=n, j = m;i>0&&j>0;)
        {

                if(max(dp[i-1][j], dp[i][j-1]) == dp[i][j])
                {
                    if(dp[i][j-1] >= dp[i-1][j])
                    {
                        ansStr.push_back(vecB[j-1]);

                       // cout<<vecB[j-1];
                        j--;
                    }
                    else
                    {
                        ansStr.push_back(vecA[i-1]);
                       // cout<<vecA[i-1];
                        i--;

                    }
                }
                else
                {
                    ansStr.push_back(vecA[i-1]);
                    //cout<<vecA[i-1];
                        i--;
                        j--;
                }
                //cout<<vecA[i]<<" "<<vecB[j]<<" "<<dp[i]endl;
        }

        for(i= i-1;i>=0;i--) ansStr.push_back(vecA[i]);
        for(j= j-1;j>=0;j--) ansStr.push_back(vecB[j]);


    reverse(ansStr.begin() , ansStr.end());
    cout<<ansStr<<endl;

    vecA[0] = '\0';
    vecB[0] = '\0';

    return;




}



int main(){
    long long i,j,k,l,n,m,ma,y,r,c[567890],z,s,e,t,tt,x5,y5;


    while(scanf("%s%s",&vecA,&vecB) != EOF)
    {

    solve();
    }
}

