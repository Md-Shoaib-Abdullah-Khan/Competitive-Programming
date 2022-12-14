#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define pb(a) push_back(a)
#define pop() pop_back()
#define mp make_pair
#define VI vector<int>
#define PII pair<int, int>
#define ff first
#define ss second
#define GCD(a, b) __gcd(a, b)
#define LCM(a, b) (a) * ((b) / GCD(a, b))
#define Pi acos(-1)
#define all(a) a.begin(), a.end()
#define SORT(x) sort(x.begin(), x.end())
#define REV(x) reverse(x.begin(), x.end())
#define FAST_CIN                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define UNIQUE(v) (v).erase(unique((v).begin(), (v).end()), (v).end())
#define infinity (1 << 28)
#define EPS 10E-9
ll L, W;
void solve() {
    
    
        double a = (double)L / (sqrt(2.0) + 1);
        double sum = L + W - 2 * a + (sqrt(2) * a);
        if(L>1)cout << fixed << setprecision(4) << (int)sum <<".2500"<< endl;

}

int main() {
    
    // freopen("input-2.txt", "r", stdin);
    // -------------------------------

   
    while(1){
      cin>>L>>W;
      if(L==0 && W==0)break;
      solve();
    }
    
    return 0;
}