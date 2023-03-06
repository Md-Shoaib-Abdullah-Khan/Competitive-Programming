#include<bits/stdc++.h>
#include <sstream>
#include <string>
#include <cstdio>
#include <iomanip>
#include <math.h>
#include <cmath>
#include<list>
using namespace std;
int mod = 1e9 + 7;

// typedef long long int ll;

// // todo defines
#define ll long long int
#define nl "\n"
#define all(v) v.begin(),v.end()
#define MAX 9999889
// #define rep(i,l,r) for(ll i=l;i<=r;i++)
// #define int                 long long
// // #define ld                  long double
// // #define f(i,n)              for(ll i=0;i<(n);i++)
// // #define f1(i,n)             for(ll i=1;i<=n;i++)
// // #define el                  "\n"
// // #define sq(a)               (a)*(a)
// // #define pb                  push_back
// // #define asort(a,n)          sort(a,a+n)
// // #define dsort(a,n)          sort(a,a+n,greater<>())
// // #define vasort(v)           sort(v.begin(), v.end());
// // #define vdsort(v)           sort(v.begin(), v.end(),greater<>());
// // #define cina(arr)           f(i,n) cin >> arr[i];
// // #define YES                 cout << "YES\n"
// // #define Yes                 cout << "Yes"<<el
// // #define yes                 cout << "yes"<<el
// // #define NO                  cout << "NO\n"
// // #define No                  cout << "No"<<el
// // #define no                  cout << "no"<<el
// // #define covid19             ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
// // #define rep(i, begin, end)  for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// // #define TC                  int t; cin >> t; while(t--)


// // // todo typedefs
// // typedef pair<int,int> pii;
// // typedef map<int,int>mii;
// // typedef vector<int>vi;
// // typedef vector<pii>vii;
// // typedef set<int> si;
// // typedef set<char> sc;


// // bool as_second(const pair<ll,ll> &a, const pair<ll,ll> &b) {return (a.second < b.second); }//sort the vector pair in assending order according to second element
// // bool ds_first(const pair<ll,ll> &a, const pair<ll,ll> &b){ return (a.first > b.first);}//sort the vector pair in decending order according to first element
// // bool ds_second(const pair<string,int> &a, const pair<string,int> &b) {return a.second>b.second;}//sort the vector pair in decending order according to second element
class Node
{

public:
    string name;
    list<string>nbrs;
    Node(string n) {
        name = n;
    }

};
class GraphString
{
    unordered_map<string, Node*>mp;
public:
    GraphString(vector<string>arr) {
        for (auto i : arr) {
            mp[i] = new Node(i);
        }
    }
    void addEdge(string x, string y, bool undir = false) {
        mp[x]->nbrs.push_back(y);
        if (undir) {
            mp[y]->nbrs.push_back(x);
        }
    }
    void printAdjList() {
        for (auto it : mp) {
            auto city = it.first;
            cout << city << "-->";
            Node *node = it.second;
            for (auto nbr : node->nbrs) {
                cout << nbr << ",";
            }
            cout << nl;
        }
    }

};
class GraphInt
{
    int V;
    list<int>*l;
public:
    GraphInt(int v) {
        this->V = v;
        l = new list<int>[V];
    }
    void addEdge(int i, int j, bool undir = true) {
        l[i].push_back(j);
        if (undir) {
            l[j].push_back(i);
        }
    }
    void printAdjList() {
        for (int i = 0; i < V; i++) {
            cout << i << "-->";
            for (auto node : l[i]) {
                cout << node << ",";
            }
            cout << nl;
        }
    }
    void bfs(int source) {
        queue<int>q;
        bool *visited = new bool[V] {0};
        q.push(source);
        visited[source] = true;
        while (!q.empty()) {
            int f = q.front();
            cout << f << " ";
            q.pop();
            for (auto node : l[f]) {
                if (!visited[node]) {
                    q.push(node);
                    visited[node] = true;
                }
            }
        }

    }

    vector<int>ans;
    void dfsHelper(int node, bool *visited) {
        ans.push_back(node);
        visited[node] = true;
        for (int nbr : l[node]) {
            if (!visited[nbr]) {
                dfsHelper(nbr, visited);
            }
        }
        return;
    }
    vector<int> dfs(int source) {
        bool *visited = new bool[V] {0};
        dfsHelper(source, visited);
    }

};


// string factorial(int n)
// {
//     int res[MAX];

//     res[0] = 1;
//     int res_size = 1;

//     for (int x = 2; x <= n; x++)
//     {
//         res_size = multiply(x, res, res_size);
//     }

//     // cout << "Factorial of given number is \n";
//     string finalRes = "";
//     for (int i = res_size - 1; i >= 0; i--) {
//         finalRes += to_string(res[i]);
//     }
//     return finalRes;
// }


bool primeFactors(int n, int l, int r, bool notFound)
{
    for (int i = l; i <= r; i++)
    {
        if (i == 1)
            i++;
        if (n % i == 0)
        {
            cout << i << " ";
            notFound = false;
        }
        while (n % i == 0)
        {
            n = n / i;
        }
    }
    return notFound;
}
bool IsInBinarySequence(ll number) {
    ll numberToCheck = 1;
    do {
        if (number == numberToCheck) return true;
        numberToCheck *= 2;
    } while (numberToCheck <= number);
    return false;
}
ll nextPowerOf2(ll n)
{
    if (n && !(n & (n - 1)))
        return n;
    ll cnt = 0;
    while (n != 0)
    {
        n >>= 1;
        cnt++;
    }
    ll x = 1;
    x = x << cnt;
    return x;
}
ll highestPowerof2(ll n)
{
    ll res = 0;
    for (ll i = n; i >= 1; i--)
    {
        // If i is a power of 2
        if ((i & (i - 1)) == 0)
        {
            res = i;
            break;
        }
    }
    return res;
}

vector<ll> first50fib1_1_2()
{
    vector<ll>v = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141 , 267914296 , 433494437 , 701408733 , 1134903170 , 1836311903 , 2971215073 , 4807526976 , 7778742049, 12586269025, 20365011074 };
    return v;
}
void first50fib0_0_1()
{
    ll arr[51] = {0, 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073, 4807526976, 7778742049};
}
ll fib(ll n) {
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
ll binets_formula(ll n) {
    double sqrt5 = sqrt(5);

    int F_n = (pow((1 + sqrt5), n) - pow((1 - sqrt5), n)) / (pow(2, n) * sqrt5);

    return F_n;
}

// const int N = 1e7;
// bool prime[N + 3];
// vector<bool> checkPrime(10000, true);
// void Sieve() {

//     for (int p = 2; p * p <= 10000; p++) {
//         if (checkPrime[p]) {
//             for (int i = p * p; i <= 10000; i += p)
//                 checkPrime[i] = false;
//         }
//     }
// }

/*
// // void Sieve(int n) {
// //     memset(prime, true, sizeof(prime));
// //     prime[0] = prime[1] = false;
// //     for (int i = 2; i <= n; i++) {
// //         if (prime[i]) {
// //             for (int j = 2 * i; j <= n; j += i) {
// //                 prime[j] = false;
// //             }
// //         }
// //     }
// // }
// //  */

// // void firstLuckyto1e9()
// // {
// //     vector<ll>v = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777, 4444, 4447, 4474, 4477, 4744, 4747, 4774, 4777, 7444, 7447
// //                     , 7474, 7477, 7744, 7747, 7774, 7777, 44444, 44447, 44474, 44477, 44744, 44747, 44774, 44777, 47444, 47447, 47474, 47477
// //                     , 47744, 47747, 47774, 47777, 74444, 74447, 74474, 74477, 74744, 74747, 74774, 74777, 77444, 77447, 77474, 77477, 77744,
// //                     77747, 77774, 77777, 444444, 444447, 444474, 444477, 444744, 444747, 444774, 444777, 447444, 447447, 447474, 447477, 447744, 447747, 447774, 447777, 474444, 474447, 474474, 474477, 474744, 474747, 474774, 474777, 477444, 477447, 477474, 477477, 477744, 477747, 477774, 477777, 744444, 744447, 744474, 744477, 744744, 744747, 744774, 744777, 747444, 747447, 747474, 747477, 747744, 747747, 747774, 747777, 774444, 774447, 774474, 774477, 774744, 774747, 774774, 774777, 777444, 777447, 777474, 777477, 777744, 777747, 777774, 777777, 4444444, 4444447, 4444474, 4444477, 4444744, 4444747, 4444774, 4444777, 4447444, 4447447, 4447474, 4447477, 4447744, 4447747, 4447774, 4447777, 4474444, 4474447, 4474474, 4474477, 4474744, 4474747, 4474774, 4474777, 4477444, 4477447, 4477474, 4477477, 4477744, 4477747, 4477774, 4477777, 4744444, 4744447,
// //                     4744474, 4744477, 4744744, 4744747, 4744774, 4744777, 4747444, 4747447, 4747474, 4747477, 4747744, 4747747, 4747774, 4747777, 4774444, 4774447, 4774474, 4774477, 4774744, 4774747, 4774774, 4774777, 4777444, 4777447, 4777474, 4777477, 4777744, 4777747, 4777774, 4777777, 7444444, 7444447, 7444474, 7444477, 7444744, 7444747, 7444774, 7444777, 7447444, 7447447,
// //                     7447474, 7447477, 7447744, 7447747, 7447774, 7447777, 7474444, 7474447, 7474474, 7474477, 7474744, 7474747, 7474774, 7474777, 7477444, 7477447, 7477474, 7477477, 7477744, 7477747, 7477774, 7477777, 7744444, 7744447, 7744474, 7744477, 7744744, 7744747, 7744774, 7744777, 7747444, 7747447, 7747474, 7747477, 7747744, 7747747, 7747774, 7747777, 7774444, 7774447,
// //                     7774474, 7774477, 7774744, 7774747, 7774774, 7774777, 7777444, 7777447, 7777474, 7777477, 7777744, 7777747, 7777774, 7777777, 44444444, 44444447, 44444474, 44444477, 44444744, 44444747, 44444774, 44444777, 44447444, 44447447, 44447474, 44447477, 44447744, 44447747, 44447774, 44447777, 44474444, 44474447, 44474474, 44474477, 44474744, 44474747, 44474774, 44474777, 44477444, 44477447, 44477474, 44477477, 44477744, 44477747, 44477774, 44477777, 44744444, 44744447, 44744474, 44744477, 44744744, 44744747, 44744774, 44744777, 44747444, 44747447, 44747474, 44747477, 44747744, 44747747, 44747774, 44747777, 44774444, 44774447, 44774474, 44774477, 44774744, 44774747, 44774774, 44774777, 44777444, 44777447, 44777474, 44777477, 44777744, 44777747, 44777774, 44777777, 47444444, 47444447, 47444474, 47444477, 47444744, 47444747, 47444774, 47444777, 47447444, 47447447, 47447474, 47447477, 47447744, 47447747, 47447774, 47447777, 47474444, 47474447, 47474474, 47474477, 47474744, 47474747, 47474774, 47474777, 47477444, 47477447, 47477474, 47477477, 47477744, 47477747, 47477774, 47477777, 47744444, 47744447, 47744474, 47744477, 47744744, 47744747, 47744774, 47744777, 47747444, 47747447, 47747474, 47747477, 47747744, 47747747, 47747774, 47747777, 47774444, 47774447, 47774474, 47774477, 47774744, 47774747, 47774774, 47774777, 47777444, 47777447, 47777474, 47777477, 47777744, 47777747, 47777774, 47777777, 74444444, 74444447, 74444474, 74444477, 74444744, 74444747, 74444774, 74444777, 74447444, 74447447, 74447474, 74447477, 74447744, 74447747, 74447774, 74447777, 74474444, 74474447, 74474474, 74474477, 74474744, 74474747, 74474774, 74474777, 74477444, 74477447, 74477474, 74477477, 74477744, 74477747, 74477774, 74477777, 74744444, 74744447, 74744474, 74744477, 74744744, 74744747, 74744774, 74744777, 74747444, 74747447, 74747474, 74747477, 74747744, 74747747, 74747774, 74747777, 74774444, 74774447, 74774474, 74774477, 74774744, 74774747, 74774774, 74774777, 74777444, 74777447, 74777474, 74777477, 74777744, 74777747, 74777774, 74777777, 77444444, 77444447, 77444474, 77444477, 77444744, 77444747, 77444774, 77444777, 77447444, 77447447, 77447474, 77447477, 77447744, 77447747, 77447774, 77447777, 77474444, 77474447, 77474474, 77474477, 77474744, 77474747, 77474774, 77474777, 77477444, 77477447, 77477474, 77477477, 77477744, 77477747, 77477774, 77477777, 77744444, 77744447, 77744474, 77744477, 77744744, 77744747, 77744774, 77744777, 77747444, 77747447, 77747474, 77747477, 77747744, 77747747, 77747774, 77747777, 77774444, 77774447, 77774474, 77774477, 77774744, 77774747, 77774774, 77774777, 77777444, 77777447, 77777474, 77777477, 77777744, 77777747, 77777774, 77777777, 444444444, 444444447, 444444474, 444444477, 444444744, 444444747, 444444774, 444444777, 444447444, 444447447, 444447474, 444447477, 444447744, 444447747, 444447774, 444447777, 444474444, 444474447, 444474474, 444474477, 444474744, 444474747, 444474774, 444474777, 444477444, 444477447, 444477474, 444477477, 444477744, 444477747, 444477774, 444477777, 444744444, 444744447, 444744474, 444744477, 444744744, 444744747, 444744774, 444744777, 444747444, 444747447, 444747474, 444747477, 444747744, 444747747, 444747774, 444747777, 444774444, 444774447, 444774474, 444774477, 444774744, 444774747, 444774774, 444774777, 444777444, 444777447, 444777474, 444777477, 444777744, 444777747, 444777774, 444777777, 447444444, 447444447, 447444474, 447444477, 447444744, 447444747, 447444774, 447444777, 447447444, 447447447, 447447474, 447447477, 447447744, 447447747, 447447774, 447447777, 447474444, 447474447, 447474474, 447474477, 447474744, 447474747, 447474774, 447474777, 447477444, 447477447, 447477474, 447477477, 447477744, 447477747,447477774, 447477777, 447744444, 447744447, 447744474, 447744477, 447744744, 447744747, 447744774, 447744777, 447747444,447747447, 447747474, 447747477, 447747744, 447747747, 447747774, 447747777, 447774444, 447774447, 447774474, 447774477
// //                     , 447774744, 447774747, 447774774, 447774777, 447777444, 447777447, 447777474, 447777477, 447777744, 447777747, 447777774, 447777777, 474444444, 474444447, 474444474, 474444477, 474444744, 474444747, 474444774, 474444777, 474447444, 474447447, 474447474, 474447477, 474447744, 474447747, 474447774, 474447777, 474474444, 474474447, 474474474, 474474477, 474474744, 474474747, 474474774, 474474777, 474477444, 474477447, 474477474, 474477477, 474477744, 474477747, 474477774, 474477777, 474744444, 474744447, 474744474, 474744477, 474744744, 474744747, 474744774, 474744777, 474747444, 474747447, 474747474, 474747477, 474747744, 474747747, 474747774, 474747777, 474774444, 474774447, 474774474, 474774477, 474774744, 474774747, 474774774, 474774777, 474777444, 474777447, 474777474, 474777477, 474777744, 474777747, 474777774, 474777777, 477444444, 477444447, 477444474, 477444477, 477444744, 477444747, 477444774, 477444777, 477447444, 477447447, 477447474, 477447477, 477447744, 477447747, 477447774, 477447777, 477474444, 477474447, 477474474, 477474477, 477474744, 477474747,477474774, 477474777, 477477444, 477477447, 477477474, 477477477, 477477744, 477477747, 477477774, 477477777, 477744444,477744447, 477744474, 477744477, 477744744, 477744747, 477744774, 477744777, 477747444, 477747447, 477747474, 477747477
// //                     , 477747744, 477747747, 477747774, 477747777, 477774444, 477774447, 477774474, 477774477, 477774744, 477774747, 477774774, 477774777, 477777444, 477777447, 477777474, 477777477, 477777744, 477777747, 477777774, 477777777, 744444444, 744444447, 744444474, 744444477, 744444744, 744444747, 744444774, 744444777, 744447444, 744447447, 744447474, 744447477, 744447744, 744447747, 744447774, 744447777, 744474444, 744474447, 744474474, 744474477, 744474744, 744474747, 744474774, 744474777, 744477444, 744477447, 744477474, 744477477, 744477744, 744477747, 744477774, 744477777, 744744444, 744744447, 744744474, 744744477, 744744744, 744744747, 744744774, 744744777, 744747444, 744747447, 744747474, 744747477, 744747744, 744747747, 744747774, 744747777, 744774444, 744774447, 744774474, 744774477, 744774744, 744774747, 744774774, 744774777, 744777444, 744777447, 744777474, 744777477, 744777744, 744777747, 744777774, 744777777, 747444444, 747444447, 747444474, 747444477, 747444744, 747444747, 747444774, 747444777, 747447444, 747447447, 747447474, 747447477, 747447744, 747447747,747447774, 747447777, 747474444, 747474447, 747474474, 747474477, 747474744, 747474747, 747474774, 747474777, 747477444,747477447, 747477474, 747477477, 747477744, 747477747, 747477774, 747477777, 747744444, 747744447, 747744474, 747744477
// //                     , 747744744, 747744747, 747744774, 747744777, 747747444, 747747447, 747747474, 747747477, 747747744, 747747747, 747747774, 747747777, 747774444, 747774447, 747774474, 747774477, 747774744, 747774747, 747774774, 747774777, 747777444, 747777447, 747777474, 747777477, 747777744, 747777747, 747777774, 747777777, 774444444, 774444447, 774444474, 774444477, 774444744, 774444747, 774444774, 774444777, 774447444, 774447447, 774447474, 774447477, 774447744, 774447747, 774447774, 774447777, 774474444, 774474447, 774474474, 774474477, 774474744, 774474747, 774474774, 774474777, 774477444, 774477447, 774477474, 774477477, 774477744, 774477747, 774477774, 774477777, 774744444, 774744447, 774744474, 774744477, 774744744, 774744747, 774744774, 774744777, 774747444, 774747447, 774747474, 774747477, 774747744, 774747747, 774747774, 774747777, 774774444, 774774447, 774774474, 774774477, 774774744, 774774747, 774774774, 774774777, 774777444, 774777447, 774777474, 774777477, 774777744, 774777747, 774777774, 774777777, 777444444, 777444447, 777444474, 777444477, 777444744, 777444747,
// //                     777444774, 777444777, 777447444, 777447447, 777447474, 777447477, 777447744, 777447747, 777447774, 777447777, 777474444,
// //                     777474447, 777474474, 777474477, 777474744, 777474747, 777474774, 777474777, 777477444, 777477447, 777477474, 777477477
// //                     , 777477744, 777477747, 777477774, 777477777, 777744444, 777744447, 777744474, 777744477, 777744744, 777744747, 777744774, 777744777, 777747444, 777747447, 777747474, 777747477, 777747744, 777747747, 777747774, 777747777, 777774444, 777774447, 777774474, 777774477, 777774744, 777774747, 777774774, 777774777, 777777444, 777777447, 777777474, 777777477, 777777744, 777777747, 777777774, 777777777, 4444444444
// //                   };

// // }
// // void  luckyGenerator() {
// //     vector<ll> lucky;
// //     lucky.pb(0);
// //     int idx = 0;
// //     while (lucky.back() < 1e10) {
// //         lucky.push_back(((lucky[idx] * 10) + 4));
// //         lucky.push_back((lucky[idx] * 10) + 7);
// //         idx++;
// //     }
// // }
// // int binarySearch(int a[], int first, int last, int search_num) {
// //     int middle;
// //     if (last >= first) {
// //         middle = (first + last) / 2;
// //         //Checking if the element is present at middle loc
// //         if (a[middle] == search_num)
// //             return middle + 1;

// //             //Checking if the search element is present in greater half
// //         else if (a[middle] < search_num)
// //             return binarySearch(a, middle + 1, last, search_num);

// //             //Checking if the search element is present in lower half
// //         else
// //             return binarySearch(a, first, middle - 1, search_num);
// //     }
// //     return -1;
// // }
// // void factorize(long long n) {
// //     int count = 0;
// //     while (!(n % 2)) {
// //         n /= 2;
// //         count++;
// //     }
// //     if (count)
// //         cout << 2 << "^" << count << endl;
// //     for (long long i = 3; i <= sqrt(n); i += 2) {
// //         count = 0;
// //         while (n % i == 0) {
// //             count++;
// //             n = n / i;
// //         }
// //         if (count)
// //             cout << i << "^" << count << endl;
// //     }
// //     if (n > 2)
// //         cout << n << "^" << 1 << endl;
// // }
// // void primeFactors(ll num) {
// //     ll fac = 2;
// //     while (num > 1) {
// //         if (num % fac == 0) {
// //             cout << fac << " ";
// //             num /= fac;
// //             ll pow = 1;
// //             while (num % fac == 0) {
// //                 num /= fac;
// //                 pow++;
// //             }
// //             cout << pow << el;
// //         }
// //         else {
// //             fac++;
// //         }
// //     }
// // }
// // bool onePrimeFactor(ll num) {
// //     ll fac = 2;
// //     int cnt = 0;
// //     while (num > 1) {
// //         if (num % fac == 0) {
// //             cnt++;
// //             while (num % fac == 0)
// //                 num /= fac;
// //         } else
// //             fac++;
// //         if (cnt >= 2)
// //             return false;
// //     }
// //     return true;
// // }
// // bool isPerfect(ll d)
// // {
// //     double temp = d;
// //     d = sqrt(d);
// //     temp = sqrt(temp);
// //     if (temp == d)
// //         return true;
// //     return false;
// // }
// // void sort(string s[], int n)//sort string according to length
// // {
// //     for (int i = 1; i < n; i++)
// //     {
// //         string temp = s[i];
// //         int j = i - 1;
// //         while (j >= 0 && temp.length() < s[j].length())
// //         {
// //             s[j + 1] = s[j];
// //             j--;
// //         }
// //         s[j + 1] = temp;
// //     }
// // }
// // bool IsPowerOfTwo(ll x)
// // {
// //     return (x & (x - 1)) == 0;
// // }
// // int binarySearchCount(ll arr[], int n, ll key)
// // {
// //     int left = 0, right = n;

// //     int mid;
// //     while (left < right) {
// //         mid = (right + left) >> 1;

// //         if (arr[mid] == key) {
// //             while (mid + 1 < n && arr[mid + 1] == key)
// //                 mid++;
// //             break;
// //         }

// //         else if (arr[mid] > key)
// //             right = mid;

// //         else
// //             left = mid + 1;
// //     }

// //     while (mid > -1 && arr[mid] > key)
// //         mid--;

// //     return mid + 1;
// // }
// // int countOnesInBin(ll n) {
// //     int cnt = 0;
// //     while (n) {
// //         cnt += n & 1;
// //         n >>= 1;
// //     }
// //     return cnt;
// // }
// // string convertToBinary(ll x) {
// //     string s;
// //     while (x > 0) {
// //         if (x % 2)
// //             s += '1';
// //         else
// //             s += '0';
// //         x /= 2;
// //     }
// //     reverse(s.begin(), s.end());
// //     return s;
// // }
// // ll convertToDecimal(string s) {
// //     reverse(s.begin(), s.end());
// //     ll ans = 0;
// //     for (int i = 0; i < s.length(); i++) {
// //         if (s[i] == '1')
// //             ans += (1 << i);
// //     }
// //     return ans;
// // }
// // long long lcm(int a, int b)
// // {
// //     return (a / __gcd(a, b)) * b;
// // }
// // bool palindrome(string s) {
// //     for (int i = 0; i < s.length() / 2; i++) {
// //         if (s[i] != s[s.length() - i - 1])
// //             return false;
// //     }
// //     return true;
// // }
// // int sumOfDigits(ll n) {
// //     int sum = 0;
// //     string s = to_string(n);
// //     f(i, s.length())sum += s[i] - '0';
// //     return sum;
// // }
// // bool isUnique(ll x) {
// //     int size = log10(x) + 1;
// //     set<int> s;
// //     while (x > 0) {
// //         s.insert(x % 10);
// //         x /= 10;
// //     }
// //     if (s.size() == size)
// //         return true;
// //     else
// //         return false;
// // }
// // void subString(string s, int n) {
// //     for (int i = 0; i < n; i++)
// //         for (int len = 1; len <= n - i; len++)
// //             cout << s.substr(i, len) << el;
// // }

// // bool sortByVal(const pair<string, int> &a,
// //                const pair<string, int> &b)
// // {
// //     return (a.second > b.second);
// // }

// // ll Round(double n) {
// //     ll y = n;
// //     if (y == n)
// //         return y;
// //     else
// //         return y + 1;
// // }
// // bool isLetter(char x) {
// //     if (x >= 'A' && x <= 'Z')
// //         return true;
// //     else if (x >= 'a' && x <= 'z')
// //         return true;
// //     else
// //         return false;
// // }
// // int findLastIndex(string s, char x)
// // {
// //     int index = -1;
// //     for (int i = 0; i < s.length(); i++)
// //         if (s[i] == x)
// //             index = i;
// //     return index;
// // }
// // bool isVowel(char c) {
// //     c = tolower(c);
// //     if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y')
// //         return true;
// //     else
// //         return false;
// // }
// // bool isOdd(char c) {
// //     if (c == '1' || c == '3' || c == '5' || c == '7' || c == '9')
// //         return true;
// //     else
// //         return false;
// // }
// // ll sum(ll n) {
// //     ll sum = (n * (n + 1)) / 2;
// //     return sum;
// // }
// // ll sumInRange(ll l , ll r) {
// //     ll ans = sum(r) - sum(l - 1);
// //     return ans;
// // }
// // bool sortedAsc(ll arr[],ll n) {
// //     for (int i = 1; i < n; i++) {
// //         if (arr[i] < arr[i-1])
// //             return false;
// //     }
// //     return true;
// // }
// // bool sortedDesc(ll arr[],ll n) {
// //     for (int i = 1; i < n; i++) {
// //         if (arr[i] > arr[i - 1])
// //             return false;
// //     }
// //     return true;
// // }
// // ll decimalDigitRoot(ll n) {
// //     return ((n - 1) % 9) + 1;
// // }
// // bool equal(char x , char y) {
// //     if (x == '.')
// //         return true;
// //     return x == y;
// // }
// // string add(string s , int n) {
// //     string temp = "";
// //     while (n--)
// //         temp += s;
// //     return temp;
// // }
// // bool regularBracketSequence(string s) {
// //     stack<char> s1;
// //     for (int i = 0; i < s.size(); i++) {
// //         if (s[i] == '(')
// //             s1.push('(');
// //         else {
// //             if (s1.empty())
// //                 return false;
// //             else
// //                 s1.pop();
// //         }
// //     }
// //     return s1.empty();
// // }
// // ll sumDigits(ll n)
// // {
// //     ll rem = 0;
// //     while (n)
// //     {
// //         rem += n % 10;
// //         n /= 10;
// //     }
// //     return rem;
// // }
// // bool sortedA(vector<int> arr,int n)
// // {
// //     for (int i = 1; i < n; i++)
// //         if (arr[i] < arr[i - 1])
// //             return false;
// //     return true;
// // }
// // bool sortedD(vector<int> arr,int n)
// // {
// //     for (int i = 1; i < n; i++)
// //         if (arr[i] > arr[i - 1])
// //             return false;
// //     return true;
// // }

// // //int ans[N];
// // /*
// // vector<int>adjList[N];
// // int dfs(int node,int parent) {
// //     visited[node] = true;
// //     for (auto adjNode : adjList[node]) {
// //         if (!visited[adjNode]) {
// //             group.pb(adjNode);
// //             dfs(adjNode, node);
// //         }
// //         else if (visited[adjNode] && adjNode != parent)
// //             return 1;
// //     }
// //     return 0;
// // }
// //  */
// // /*
// // void bfs(int node) {
// //     queue<int> q;
// //     q.push(node);
// //     visited[node] = 1;
// //     while (!q.empty()) {
// //         group.pb(q.front());
// //         for (auto adjNode : adjList[q.front()])
// //             if (!visited[adjNode])
// //                 q.push(adjNode), visited[adjNode] = 1;
// //         q.pop();
// //     }
// // }

// // void dijkstra(int source, vector<vector<pair<int,int>>>&graph) {
// //     int n = graph.size();
// //     vector<int> dist(n, inf), pre(n, -1);
// //     // cost , node
// //     priority_queue<pair<int, int>> nextToVisit;

// //     dist[source] = 0;
// //     pre[source] = source;
// //     nextToVisit.push({0, source});

// //     while (!nextToVisit.empty()) {
// //         int u = nextToVisit.top().second;
// //         nextToVisit.pop();
// //         if (visited[u])continue;
// //         visited[u] = 1;
// //         for (auto e : graph[u]) {
// //             int v = e.first;
// //             int c = e.second;
// //             if (dist[u] + c < dist[v]) {
// //                 dist[v] = dist[u] + c;
// //                 pre[v] = u;
// //                 nextToVisit.push({-dist[v], v});
// //             }
// //         }
// //     }
// // }
// // */
// // string onlyAlphaString(string s) {
// //     string temp = "";
// //     for (int i = 0; i < s.size(); i++)
// //         if (isalpha(s[i]))temp += tolower(s[i]);
// //     return temp;
// // }
// // int computeXOR(ll a) {
// //     if (a % 4 == 0) return a;
// //     else if (a % 4 == 1) return 1;
// //     else if (a % 4 == 2) return a + 1;
// //     else return 0;
// // }
// // void sort3(int& a, int& b, int& c) {
// //     if (a > b)swap(a, b);
// //     if (b > c)swap(b, c);
// //     if (a > b)swap(a, b);
// // }
// // int lis(vector<int>&a) {
// //     int n = a.size();
// //     vector<int> dp(n, 1);
// //     for (int i = 0; i < n; i++)
// //         for (int j = 0; j < i; j++)
// //             if (a[j] < a[i])dp[i] = max(dp[i], dp[j] + 1);
// //     int ans = dp[0];
// //     for (int i = 1; i < n; i++)ans = max(ans, dp[i]);
// //     return ans;
// // }
// // bool oneCharacterString(string s) {
// //     vasort(s);
// //     return s[0] == s[s.size() - 1];
// // }

// // ll nPr(ll n , ll r) {
// //     ll fact = 1;
// //     while (r--) {
// //         fact *= n;
// //         n--;
// //     }
// //     return fact;
// // }
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    return (a.second >= b.second);
}
// // ll mod_mul(ll a, ll b, ll m) {
// //     a = a % m;
// //     b = b % m;
// //     return (((a * b) % m) + m) % m;
// // }
// // ll getFact(ll n){
// //     if(n==0 or n==1){
// //         return 1;
// //     }
// //     ll f=1;
// //     for(ll i=1;i<=n;i++){
// //         f*=i;
// //     }
// //     return f;
// // }
// // ll getNumber(ll n){
// //     ll sum=1;
// //     while(n>0){
// //         ll v = getFact(n%10);
// //         sum*=getFact(n%10);
// //         n/=10;
// //     }

// //     return sum;
// // }
// // vector<int> factors;
// // void primeFactors(ll n)
// // {

// //     while (n % 2 == 0)
// //     {
// //         factors.push_back(2);
// //         n = n/2;
// //     }


// //     for (ll i = 3; i <= sqrt(n); i = i + 2)
// //     {

// //         while (n % i == 0)
// //         {
// //             factors.push_back(i);
// //             n = n/i;
// //         }
// //     }


// //     if (n > 2)
// //         factors.push_back(n);
// // }
// // string ch[10]={"","","2","3","223","5","53","7","7222","7332"};
// // taskkill -im test.exe -f
// // think simple
// // string rev(string s,ll l, ll r){
// //     while(l<r){
// //         swap(s[l],s[r]);
// //         l++;
// //         r--;
// //     }
// //     return s;

// // }
// // void addEdge(vector<int> adj[], int u, int v)
// // {
// //     adj[u].push_back(v);
// //     adj[v].push_back(u);
// // }
// // void printGraph(vector<int> adj[], int V)
// // {
// //     for (int v = 0; v < V; ++v) {
// //         cout << "\n"<< v;
// //         for (auto x : adj[v])
// //             cout << "-> " << x;
// //         printf("\n");
// //     }
// // }
// // bool areBracketsBalanced(string expr)
// // {
// //     stack<char> s;
// //     char x;

// //     // Traversing the Expression
// //     for (int i = 0; i < expr.length(); i++)
// //     {
// //         if (expr[i] == '(' || expr[i] == '['
// //             || expr[i] == '{')
// //         {
// //             // Push the element in the stack
// //             s.push(expr[i]);
// //             continue;
// //         }

// //         // IF current current character is not opening
// //         // bracket, then it must be closing. So stack
// //         // cannot be empty at this point.
// //         if (s.empty())
// //             return false;

// //         switch (expr[i]) {
// //         case ')':

// //             // Store the top element in a
// //             x = s.top();
// //             s.pop();
// //             if (x == '{' || x == '[')
// //                 return false;
// //             break;

// //         case '}':

// //             // Store the top element in b
// //             x = s.top();
// //             s.pop();
// //             if (x == '(' || x == '[')
// //                 return false;
// //             break;

// //         case ']':

// //             // Store the top element in c
// //             x = s.top();
// //             s.pop();
// //             if (x == '(' || x == '{')
// //                 return false;
// //             break;
// //         }
// //     }

// //     // Check Empty Stack
// //     return (s.empty());
// // }
// // const int N=1e5+10;

ll stringtoint(string s)
{
    stringstream geek(s);
    ll x = 0;
    geek >> x;
    return x;
}
string inttostring(ll n)
{
    ostringstream str;
    str << n;
    string geek = str.str();
    return geek;
}
// ll n,w;
// ll value[N],weight[N];
// ll dp[101][100000];
// ll func(ll value[],ll weight[],ll w,ll n){
//     if(n==0 or w==0){
//         return 0;
//     }
//     if(dp[n][w]!=-1){
//         return dp[n][w];
//     }
//     if(weight[n-1]<=w){
//         return dp[n][w]=max(value[n-1]+func(value,weight,w-weight[n-1],n-1),func(value,weight,w,n-1));
//     }
//     else{
//         return dp[n][w]=func(value,weight,w,n-1);
//     }

// }
void display1d(vector<int>a)
{
    for (auto i : a)
    {
        cout << i << " ";
    }
    cout << endl;
}
void display2d(vector<vector<int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << nl;
    }
}
// string chartostring(char a)
// {
//     stringstream stream;
//     stream << a;
//     string str;
//     stream >> str;
//     return str;
// }

// ll lcm(ll a, ll b)
// {
//     return a/__gcd(a,b)*b;
// }


// int getminidex(vector<int> arr)
// {
//     int minindex=-1,minvalue=INT_MAX;
//     for(int i=0; i<arr.size(); i++)
//     {
//         if(arr[i]<minvalue)
//         {
//             minvalue=arr[i];
//             minindex=i;
//         }
//     }
//     return minindex;
// }


bool isPalindrome(string s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - 1 - i])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int countBits(int n) {
    int cnt = 0;
    while (n > 0) {
        n /= 2;
        cnt++;
    }
    return cnt;
}

// Function to find the possible
// permutations
void permutations(vector<vector<int> >& res,
                  vector<int> nums, int l, int h)
{
    // Base case
    // Add the vector to result and return
    if (l == h) {
        res.push_back(nums);
        return;
    }

    // Permutations made
    for (int i = l; i <= h; i++) {

        // Swapping
        swap(nums[l], nums[i]);

        // Calling permutations for
        // next greater value of l
        permutations(res, nums, l + 1, h);

        // Backtracking
        swap(nums[l], nums[i]);
    }
}

// Function to get the permutations
vector<vector<int> > permute(vector<int>& nums)
{
    // Declaring result variable
    vector<vector<int> > res;
    int x = nums.size() - 1;

    // Calling permutations for the first
    // time by passing l
    // as 0 and h = nums.size()-1
    permutations(res, nums, 0, x);
    return res;
}



bool isPrime(int n)
{

    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }


    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

vector<int> getDivisors(int n) {
    vector<int>ans;
    set<int>st;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {

            if (n / i == i)
                st.insert(i);

            else {
                st.insert(i);
                st.insert(n / i);
            }
        }
    }
    for (auto it : st) {
        ans.push_back(it);
    }
    return ans;
}
bool isPerfect(long long int n)
{

    long long int sum = 1;


    for (long long int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i != n)
                sum = sum + i + n / i;
            else
                sum = sum + i;
        }
    }

    if (sum == n && n != 1)
        return true;

    return false;
}
bool isVowel(char x)
{
    return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U');
}


int maxPrime = 0;
void primeFactors(int n)
{
    vector<int>ans;
    int c = 2;
    while (n > 1)
    {
        if (n % c == 0) {
            // cout << c << nl;
            maxPrime = max(maxPrime, c);
            n /= c;
        }
        else c++;
    }
    // return ans;
}
ll gcd(ll a, ll  b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}


int countSetBits(ll n)
{
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}
int dirx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
int diry[8] = { -1, -1, 0, 1, 1, 1, 0, -1};

int find(int node, vector<int>&parent) {
    if (node != parent[node]) {
        parent[node] = find(parent[node], parent);
    }
    return parent[node];
}
void unionNode(int x, int y, vector<int>&parent, vector<int>&rank) {
    int s1 = find(x, parent);
    int s2 = find(y, parent);
    if (s1 != s2) {
        if (rank[s1] < rank[s2]) {
            parent[s1] = s2;
            rank[s2] += rank[s1];
        }
        else {
            parent[s2] = s1;
            rank[s1] += rank[s2];
        }
    }
}


void fillParent(vector<int>&parent, int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
}
void updateParent(vector<int>&parent, int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = find(parent[i], parent);
    }
}

void permute(string a, int l, int r, set<string>&ans)
{
    if (l == r) {
        ans.insert(a);
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(a[l], a[i]);
        permute(a, l + 1, r, ans);
        swap(a[l], a[i]);
    }
}
bool isBipartiteBfs(unordered_map<int, vector<int>>graph, int node, vector<int>&color) {
    queue<int>q;
    color[node] = 1;
    q.push(node);
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (int ele : graph[curr]) {
            if (color[ele] == color[curr]) {
                return false;
            }
            if (color[ele] == -1) {
                color[ele] = 1 - color[curr];
                q.push(ele);
            }
        }
    }
    return true;
}
vector<pair<int, int>> horseDir = {{ -1, -2}, { -2, -1}, { -2, 1}, { -1, 2}, {1, 2},   {2, 1},   {2, -1}, {1, -2}};

int findMaximumXOR(vector<int>& nums) {
    int ans = 0, mask = 0;
    unordered_set<int>st;
    for (int i = 31; i >= 0; i--) {
        mask |= (1 << i);
        int temp = ans | (1 << i);
        for (int j = 0; j < nums.size(); j++) {
            int num = nums[j] & mask;
            if (st.find(temp ^ num) != st.end()) {
                ans = temp;
                break;
            }
            st.insert(num);
        }
        st.clear();
    }
    return ans;
}
void solve() {
    string s, t;
    cin >> s >> t;
    if (s.back() == t.back()) {
        if (s.back() == 'S') {
            if (t.size() > s.size()) {
                cout << ">" << nl;
            }
            else if (t.size() < s.size()) {
                cout << "<" << nl;
            }
            else {
                cout << "=" << nl;
            }
        }
        else if (s.back() == 'L') {
            if (t.size() > s.size()) {
                cout << "<" << nl;
            }
            else if (t.size() < s.size()) {
                cout << ">" << nl;
            }
            else {
                cout << "=" << nl;
            }
        }
        else if (s.back() == 'M') {
            cout << "=" << nl;
        }
    }
    else {
        if (s.back() == 'L') {
            cout << ">" << nl;
        }
        else if (s.back() == 'M' and t.back() == 'S') {
            cout << ">" << nl;
        }
        else if (s.back() == 'M' and t.back() == 'L') {
            cout << "<" << nl;
        }
        else if (s.back() == 'S') {
            cout << "<" << nl;
        }
        else if (t.back() == 'L') {
            cout << ">" << nl;
        }
        else if (t.back() == 'M' and s.back() == 'S') {
            cout << "<" << nl;
        }
        else if (t.back() == 'M' and s.back() == 'L') {
            cout << ">" << nl;
        }
        else if (t.back() == 'S') {
            cout << ">" << nl;
        }
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    // taskkill -im main.exe -f
    // cout << "Case #" << tt << ":" << " " << ans - 1 << '\n';
    // cout << "Running Time: " << 1.0 * clock() / CLOCKS_PER_SEC << " s .\n";
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for (int tt = 0; tt < t; tt++) {
        solve();
    }
    return 0;
}