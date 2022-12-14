#include<bits/stdc++.h>
#include<iostream>
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



void solve(){

    ll n,i,j,k,x,y;

    cin>> n;

    string p1[n], p2[n], p3[n];

    ll point1=0, point2=0, point3=0;
    ll z[27][27][27];

    memset(z, 0, sizeof(z));
    
    for(i=0;i<n;i++){
        cin>>p1[i];
        z[p1[i][0]-'a'][p1[i][1]-'a'][p1[i][2]-'a'] += 1;
    }
    for(i=0;i<n;i++){
        cin>>p2[i];
        z[p2[i][0]-'a'][p2[i][1]-'a'][p2[i][2]-'a'] += 2;
    }
    for(i=0;i<n;i++){
        cin>>p3[i];
        z[p3[i][0]-'a'][p3[i][1]-'a'][p3[i][2]-'a'] += 4;
    }

    for(i=0;i<27;i++){
        for(j=0;j<27;j++){
            for(k=0;k<27;k++){

                if(z[i][j][k]==7){
                    continue;
                }
                else if(z[i][j][k]==3){
                    point1++;
                    point2++;
                }
                else if(z[i][j][k]==6){
                    point2++;
                    point3++;
                }
                else if(z[i][j][k]==5){
                    point1++;
                    point3++;
                }
                else if(z[i][j][k]==1){
                    point1+=3;
                }
                else if(z[i][j][k]==2){
                     point2+=3;   
                }
                else if(z[i][j][k]==4){
                    point3+=3;   
                }
            }
        }
        
    }

    cout<<point1<<" "<<point2<<" "<<point3<<endl;
}

int main()
{
    //   ios_base::sync_with_stdio(false);
    //   cin.tie(NULL); 
   int t;
  cin>>t;
   
    while(t--) solve();
}

