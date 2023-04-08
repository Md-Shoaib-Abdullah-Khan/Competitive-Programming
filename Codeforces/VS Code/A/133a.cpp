#include <bits/stdc++.h>
using namespace std;
// #pragma GCC               optimize ("Ofast")
// #pragma GCC               optimize("O3")
#define ll                long long
#define ull               unsigned long long
#define MEMSET(a, b)      memset(a, b, sizeof(a))
#define pb(a)             push_back(a)
#define pop()             pop_back()
#define ff                first
#define ss                second
#define sqr(x)            (x) * (x)
#define SZ(a)             (int)a.size()
#define FAST_CIN          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define UNIQUE(v)         (v).erase(unique((v).begin(), (v).end()), (v).end())
#define POPCOUNT          (m) __builtin_popcountll(m)
#define RIGHTMOST(m)      __builtin_ctzll(m)
#define LEFTMOST(x)       (63 - __builtin_clzll((x)))
#define ODD(x)            (((x)&1) == 0 ? (0) : (1))
#define all(a)            a.begin(), a.end()
#define SORT(x)           sort(x.begin(), x.end())
#define REV(x)            reverse(x.begin(), x.end())
#define DBG0              cerr << __LINE__ << ": ----" << "\n"
#define lower(x,y)        lower_bound(x.begin(), x.end(), y) - x.begin()
#define upper(x,y)        upper_bound(x.begin(), x.end(), y) - x.begin()
#define find(x,y)         find(x.begin(), x.end(), y) - x.begin()
#define GCD(a, b)         __gcd(a, b)
#define LCM(a, b)         (a * b) / GCD(a, b)
#define YES               cout<<"YES"<<endl
#define NO                cout <<"NO"<<endl
#define Pi                acos(-1)
#define mod               1000000007
#define intLimit          2147483648
#define infinity          (1 << 28)
#define EPS               10E-9
// -----------------------------------------------------------------


void mainSolve() {
    string s;
    cin >> s;

    int n = s.length();

    for (int i = 0;i < n;i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            YES;
            return;
        }
    }
    NO;
}

int main() {
    FAST_CIN;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt","w",stdout);
#endif
    //------------------------------------------------------------

    ll t;
    // cin >> t;
    t = 1;
    for (int i = 1; i <= t; i++) {
        // PRINT_CASE:
        // cout<<"Case "<<i<<": ";
        mainSolve();
    }

    return 0;
}