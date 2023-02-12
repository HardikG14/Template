#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ppb pop_back
#define endl "\n"
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rp(i, a) for (int i = 0; i < a; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;
const int N = 0;

#ifndef ONLINE_JUDGE
#define debug(x)cerr << #x << " ";_print(x);cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t){cerr <<t; }
void _print(int t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(double t) { cerr << t; }

template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fr); cerr << ","; _print(p.sc); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

ll mod(ll N){
    return (N%M + M)%M;
}
ll mul(ll a,ll b){
    return mod(mod(a)*mod(b));
}
ll add(ll a,ll b){
    return mod(mod(a)+mod(b));
}
ll sub(ll a,ll b){
    return mod(mod(a)-mod(b)+M);
}

void precal()
{
}
void solve()
{
    
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    cout << fixed;
    cout << setprecision(10);
    precal();
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}