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

string overlap(string s1, string s2){
    int i,j,k,length=0;
    int n1=s1.size(), n2= s2.size();
    for(i=0;i<min(n1, n2);i++){
        if(s1.substr(n1-i-1,i+1).compare(s2.substr(0,i+1))==0)length = max(length, i);
    }
    
    string ans1=s1+s2;
    if(length>0) ans1=s1+s2.substr(length+1, n2-length);

    length=0;
    for(i=0;i<min(n1, n2);i++){
        if(s2.substr(n2-i-1,i+1).compare(s1.substr(0,i+1))==0)length = max(length, i);
    }
    string ans2=s2+s1;
    if(length>0)ans2=s2+s1.substr(length+1, n1-length);
    //cout<<ans1<<" "<<ans2<<endl;
   
    if(ans1.size()<ans2.size()) return ans1;
    else return ans2;
    
}



void solve(){

   ll n,m,k,i,j,x,a,b,c,y;

    cin>>n;
    vector<string> s;

   for(i=0;i<n;i++){
    string s1;
    cin>>s1;
    s.push_back(s1);
   }
   //cout<<overlap(s[0], s[1])<<endl;
   while(s.size()!=1){
    int diff=INF, idx1=0,idx2=0;
        for(i=0;i<s.size();i++){
            for(j=0;j<s.size();j++){
                if(i==j)continue;

                string str = overlap(s[i],s[j]);

                if((s[i].size()+s[j].size() - str.size())<=diff){
                    diff=s[i].size()+s[j].size() - str.size();
                    idx1 = i;
                    idx2 = j;
                }
            }
        }
        s.pb(overlap(s[idx1], s[idx2]));
        s.erase(s.begin()+max(idx1,idx2));
        s.erase(s.begin()+min(idx1,idx2));


        for(i=0;i<s.size();i++)cout<<s[i]<<" ";
        cout<<endl;
        
   }

   cout<<s[0]<<endl;
    
    
    
    
    

    
    





}

int main()
{
    //   ios_base::sync_with_stdio(false);
    //   cin.tie(NULL);
   int t;
  cin>>t;

    while(t--) solve();
}


