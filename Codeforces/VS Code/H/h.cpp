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
#define INF                     1e9+7

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

 void constructMxTree(int input[], int tree[], int low, int high, int pos){
    if(low==high){
        tree[pos]=input[low];
        return;
    }
    int mid = (low + high)/2;
    constructMxTree(input, tree, low, mid, 2*pos+1);
    constructMxTree(input, tree, mid+1, high, 2*pos+2);

    tree[pos]=max(tree[2*pos+1], tree[2*pos+2]);
 }
 void constructMnTree(int input[], int tree[], int low, int high, int pos){
    if(low==high){
        tree[pos]=input[low];
        return;
    }
    int mid = (low + high)/2;
    constructMnTree(input, tree, low, mid, 2*pos+1);
    constructMnTree(input, tree, mid+1, high, 2*pos+2);

    tree[pos]=min(tree[2*pos+1], tree[2*pos+2]);
 }
 void childs(int tree[], int low, int high, int pos){
    if(low==high){
        tree[pos]=1;
        return;
    }
    int mid = (low + high)/2;
    childs( tree, low, mid, 2*pos+1);
    childs(tree, mid+1, high, 2*pos+2);

    tree[pos]=tree[2*pos+1]+ tree[2*pos+2];
 }

 int query(int tree[], int qlow, int qhigh, int low, int high, int pos){

    if(qlow<=low && qhigh>=high)return tree[pos];

    else if(qlow>high || qhigh<low)return INF;

    int mid=(low+high)/2;

    return min(query(tree, qlow, qhigh, low, mid, 2*pos+1), query(tree, qlow, qhigh, mid+1, high, 2*pos+2));
 }
 void update(int tree[], int low, int high, int pos, int indx, int value){
    if(low==high){
        if(low==indx)tree[pos]=value;
        return;
    }
    int mid = (low + high)/2;
    update(tree, low, mid, 2*pos+1, indx, value);
    update(tree, mid+1, high, 2*pos+2, indx, value);

    tree[pos]=min(tree[2*pos+1], tree[2*pos+2]);
 }

 int loose(int mxTree[], int mnTree[], int child[], int low, int high, int pos, int length){
    if(low==high){
        return 0;
    }
    else if(mxTree[pos] + mnTree[pos]>length)return child[pos];
    int mid=(low+high)/2;
    
    return max(loose(mxTree, mnTree, child, low, mid, 2*pos+1, length),loose(mxTree, mnTree, child, mid+1, high, 2*pos+2, length));
 }

void solve(){

 int n,m,i,j,a,b;
    cin>>n>>m;

    i=1;
    while(i<n)i*=2;
    int mxtree[2*i-1],mntree[2*i-1],child[2*i-1];
    int input[n];
    for(i=0;i<n;i++)cin>>input[i];
    
    constructMxTree(input, mxtree, 0, n-1, 0);
    constructMnTree(input, mntree, 0, n-1, 0);
    childs(child, 0, n-1, 0);

    cout<<loose(mxtree, mntree, child, 0, n-1, 0, n)<<endl;
    while(m--){
        cin>>a;
        cout<<child[a]<<endl;
    }


    
}

int main()
{
    
   ll t;
  cin>>t;
   
    while(t--) solve();
}

