#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define mp make_pair
#define sz(a) a.size()
#define MOD 1000000007
#define forn(i, n) for (int i = 0; i < n; ++i)
#define INF 1e18
template <typename... T>
void read(T &...args)
{
    ((cin >> args), ...);
}
template <typename... T>
void write(T... args)
{
    ((cout << args), ...);
}
const vector<pair<int, int>> dirs1 = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, 0}, {1, 0}, {0, 1}, {0, -1}};
const vector<pair<int, int>> dirs2 = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
const int maxN = 1e5 + 1;

void solve() {
    ll n, m, k;
    read(n,m,k);
    map<ll, ll> cntA, cntB;
    forn(i,n) {
        ll a;read(a);
        cntA[a]++;
    }
    forn(i, m) {
        ll b;read(b);
        cntB[b]++;
    }

    ll a = 0, b = 0, c = 0;
    for(ll i=1;i<=k;++i) {
        if (cntA[i] >= 1 && cntB[i] == 0)a++;
        if (cntB[i] >= 1 && cntA[i] == 0)b++;
        if (cntA[i] >= 1 && cntB[i] >= 1)c++;
    }

    if (a > k/2 || b > k/2 || (a + b + c) < k)
        write("NO\n");
    else write("YES\n");
    
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    read(t);
    while(t--)solve();
    return 0;
}